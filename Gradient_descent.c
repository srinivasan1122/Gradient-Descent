#include <stdio.h>

float gradient_w1(float x1, float x2, float y, float w1, float w2) {
    float diff_w1 = (2 * y - ((w1 * x1) + (w2 * x2)) * (-x1));
    float updated_w1 = w1 - (0.01 * diff_w1);
    return updated_w1;
}

float gradient_w2(float x1, float x2, float y, float w1, float w2) {
    float diff_w2 = (2 * y - ((w1 * x1) + (w2 * x2)) * (-x2));
    float updated_w2 = w2 - (0.01 * diff_w2);
    return updated_w2;
}

int main() {
    float data[4][3];
    for (int i = 0; i < 4; i++) {
        printf("Enter the values for data point %d: ", i + 1);
        scanf("%f %f %f", &data[i][0], &data[i][1], &data[i][2]);
    }
    float initial_w1, initial_w2;
    printf("Enter initial value for w1: ");
    scanf("%f", &initial_w1);
    printf("Enter initial value for w2: ");
    scanf("%f", &initial_w2);

    for (int i = 0; i < 4; i++) {
        float updated_w1 = gradient_w1(data[i][0], data[i][1], data[i][2], initial_w1, initial_w2);
        float updated_w2 = gradient_w2(data[i][0], data[i][1], data[i][2], initial_w1, initial_w2);
        printf("\ngradw1: %f", updated_w1);
        printf("  gradw2: %f", updated_w2);
    }

    return 0;
}