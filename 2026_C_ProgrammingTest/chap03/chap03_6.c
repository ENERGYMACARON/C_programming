#include <stdio.h>

int main() {
    double pi = 3.14;
    float a, b;

    printf("원기둥 밑면의 반지름을 입력하세요(cm): ");
    scanf("%f", &a);

    printf("원기둥의 높이를 입력하세요(cm): ");
    scanf("%f", &b);

    printf("원기둥의 부피(cm의 세제곱): %.2f", (float)(pi*a*a*b));
    
    return 0;
}