#include <stdio.h>

int main() {
    int a, b;
    printf("첫 번째 양의 정수를 입력하세요: ");
    scanf("%d", &a);

    printf("두 번째 양의 정수를 입력하세요: ");
    scanf("%d", &b);

    printf("덧셈: %d\n", a+b);
    printf("뺄셈: %d\n", a-b);
    printf("곱셈: %d\n", a*b);
    printf("나눗셈: %d\n", a/b);
    printf("나머지: %d\n", a%b);

    return 0;
}