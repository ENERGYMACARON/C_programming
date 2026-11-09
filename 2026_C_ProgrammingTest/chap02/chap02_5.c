#include <stdio.h>

int main() {
    float number = 0;
    printf("실수를 입력하세요: ");
    scanf("%f", &number);
    printf("입력한 숫자의 제곱은 %.2f 입니다.", number*number);

    return 0;
}