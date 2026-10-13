#pragma warning(disable:4996)
#include <stdio.h>

int main() 
{
    int n, lineCnt;

    printf("1~100 사이 숫자 입력: ");
    scanf("%d", &n);

    if (n>100) n = 100;

    lineCnt = 0;

    while(n>0) {
        if (lineCnt < 10) { // 줄의 갯수가 10보다 작은가?
            lineCnt++; // 조건이 참인 경우 줄 카운터를 1 증가시킨다.
        }
        else { // 10개를 초과햇다면
            printf("\n"); // 줄을 바꾸고
            lineCnt = 1; // 숫자를 다시 센다
        }
        printf("%3d ", n--);
    }
}