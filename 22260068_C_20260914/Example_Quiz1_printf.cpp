#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("저장할 정수: ");
    scanf("%d", &score);

    printf("저장할 문자: ");
    scanf(" %c", &grade);

    printf("입력받은 정수: %d\n", score);
    printf("입력받은 문자: %c\n", grade);

    return 0;
}