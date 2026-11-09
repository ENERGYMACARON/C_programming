#include <stdio.h>

int main() {
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    printf("8진수: %o\n", num);
    printf("10진수: %d\n", num);
    printf("16진수(대문자): %X\n", num);
    printf("16진수(소문자): %x\n", num);

    return 0;
}