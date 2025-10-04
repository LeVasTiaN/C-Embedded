#include <stdio.h>
#include <math.h>

int main() {
    double z1, z2, num, denom;
    int b;
    printf("Enter the value for b: ");
    scanf_s("%d", &b);
    num = sqrt(2*b + 2*sqrt(b*b - 4));
    denom = sqrt(b*b - 4) + b + 2;
    z1 = num/denom;
    z2 = 1 / sqrt(b + 2);
    printf( "Calculated result for z1: %lf\n", z1);
    printf( "Calculated result for z2: %lf\n", z2);
    return 0;
}