#include <stdio.h>

int main() {
    int num, result;

    printf("정수 입력: ");
    scanf("%d", &num);
    
    result = ~num + 1;

    printf("2의 보수: %d\n", result);

    return 0;
}