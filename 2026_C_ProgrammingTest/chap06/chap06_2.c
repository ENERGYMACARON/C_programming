#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("몇 개의 조화수열 항을 생성하시겠습니까> ");
    scanf("%d", &n);

    printf("조화수열의 식 : ");

    for (int i=1; i<= n; i++) {
        sum += 1.0 / i;

        if(i == 1) {
            printf("1");
        } else if (i == 2) {
            printf(" + 1/2");
        } else if (i == 3 && n > 3) {
            printf(" + ... ");
        } else if (i == n) {
            printf(" + 1/%d", n);
        }
    }

    printf("\n조회수열의 합 = %.4f\n", sum);

    return 0;
}