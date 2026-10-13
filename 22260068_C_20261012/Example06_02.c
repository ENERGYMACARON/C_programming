#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int number, count = 0, sum = 0;

    printf("\n점수 입력: ");
    scanf("%d", &number);
    printf("당신이 입력한 수: %d\n\n", number);

    while( number != 0 ) { // number가 0이 아닐때까지 반복
        count++; // 카운터를 1씩 증가
        sum += number % 10; // number 의 나누기 10의 나머지 값을 sum 에 더한다.
        number /= 10; // number 를 10으로 나눈다
        // 조건이 만족하면 다시 반복한다.
    }

    printf("정수의 각 자릿수 개수: %d\n", count);
    printf("입력한 숫자의 합계: %d\n", sum);

    return 0;
}