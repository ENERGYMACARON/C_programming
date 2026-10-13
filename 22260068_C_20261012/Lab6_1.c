#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int salary, monthlyExpense, targetAmount;
    int totalSavings = 0;
    int months = 0;

    printf("월급을 입력하세요(만원 단위): ");
    scanf("%d", &salary);

    printf("월간 지출을 입력하세요(만원 단위): ");
    scanf("%d", &monthlyExpense);

    printf("목표 금액을 입력하세요(만원 단위): ");
    scanf("%d", &targetAmount);

    while (totalSavings < targetAmount) {
        totalSavings += (salary - monthlyExpense);
        months++;
    }

    printf("\n월급 %d만 원\n", salary);
    printf("월간 지출 %d만 원\n", monthlyExpense);
    printf("목표 금액 %d만 원\n", targetAmount);
    printf("목표 금액을 달성하는 데 %d개월이 걸립니다.\n", months);

    return 0;
}