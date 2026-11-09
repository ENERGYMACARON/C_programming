#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1));
}

int main() {
    double x1, y1, z1;
    double x2, y2, z2;
    double d;

    printf("A(x, y, z) : ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("B(x, y, z) : ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    d = distance(x1, y1, z1, x2, y2, z2);

    printf("D = %.2f\n", d);

    return 0;
}