#include <stdio.h>

int main() {
    int start, end;

    printf("두 개의 양의 정수를 입력하세요: ");
    scanf("%d %d", &start, &end);

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("소수 범위 [%d, %d] 내의 소수:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (i < 2) {
            continue;
        }

        int is_prime = 1;

        for (int j = 2; j < i; j++) {
            if(i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}