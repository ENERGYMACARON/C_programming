#include <stdio.h>

int main() {
    float x;
    printf("x의 값을 입력하시오: ");
    scanf("%f", &x);

    float answer = 5*(x*x*x) + 6*(x*x) -(2*x) + 3;
    printf("다항식의 값은 %.2f", answer);

    return 0;
}