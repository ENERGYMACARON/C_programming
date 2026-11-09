#pragma warning(disable:4996)
#include <stdio.h>

void numPrinted(int numbers[], int readNum);

void numPrinted(int numbers[], int readNum) {
    for (int i= readNum-1; i>=0; i--) {
        printf("%3d ", numbers[i]);
    }
}

int main() {
    int readNum;
    int numbers[20];

    printf("1부터 20 사이의 정수를 입력받아 역순으로 5개씩 출력하려고 합니다\n");
    printf("정수 개수를 입력: ");
    scanf("%d", &readNum);

    if (readNum > 20) readNum = 20;

    printf("\n입력한 정수값 초기화: \n");
    for (int i=0; i<readNum; i++) scanf("%d", &numbers[i]);

    printf("\n입력한 정수를 기준으로 역순 출력합니다.\n");
    numPrinted(numbers, readNum);

    return 0;
}