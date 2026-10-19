#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    double initialDeposit;
    double annualInterestRate, interest;
    int year, numYears;

    printf("초기 예금액을 입력하세요: ");
    scanf("%lf", &initialDeposit);

    printf("연 이자율을 입력하세요 (퍼센트): ");
    scanf("%lf", &annualInterestRate);

    printf("저축 기간을 입력하세요 (년): ");
    scanf("%d", &numYears);

    for (year=1; year <= numYears; year++) {
        interest = (initialDeposit * annualInterestRate / 100);
        initialDeposit += interest;
    
        printf("%d년: 예금액= %.2lf, 이자=%.2lf\n", year, initialDeposit, interest);
    }

    return 0;
}