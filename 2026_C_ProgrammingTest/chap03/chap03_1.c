#include <stdio.h>

int main() {
    char alp;

    printf("알파벳을 입력하세요: ");
    scanf("%c", &alp);

    printf("%c의 아스키코드: %d", alp, alp);

    return 0;
}