#include <stdio.h>
double trangleArea(double base, double height);

int main() {
    double base = 10.0, height = 5.0;
    double area = 0.0;

    area = trangleArea(base, height);

    printf("삼각형의 밑변이 %.2lf, 높이가 %.2lf일 때\n", base, height);
    printf("삼각형의 넓이는 %.2lf입니다\n", area);

    return 0;
}

double trangleArea(double base, double height) {
    return (base * height) / 2.0;
}