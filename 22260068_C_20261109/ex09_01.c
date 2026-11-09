#include <stdio.h>

int main() {
    int numbers[5];
    numbers[0] = 11;
    numbers[1] = 22;
    numbers[2] = 33;
    numbers[3] = 44;
    numbers[4] = 55;

    printf("0번 요소: %d\n", numbers[0]);
    printf("1번 요소: %d\n", numbers[1]);
    printf("2번 요소: %d\n", numbers[2]);
    printf("3번 요소: %d\n", numbers[3]);
    printf("마지막 요소: %d\n", numbers[4]);

    return 0;
}