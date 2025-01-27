#include <stdio.h>
#include <math.h>

void raizes (float, float, float, float*, float*);

int main() {
    float a, b, c, x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    raizes (a, b, c, &x1, &x2);
    return 0;
}

void raizes (float a, float b, float c, float* x1, float* x2) {
    float delta = b * b - 4 * a * c;
    if (a == 0 || delta < 0) {
        printf("NARN\n");
    }else {
        *x1 = (-b + sqrt(delta))/(2*a);
        *x2 = (-b - sqrt(delta))/(2*a);
        printf("%.2f\t%.2f", *x1, *x2);
    }
}