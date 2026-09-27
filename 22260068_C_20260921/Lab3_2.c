#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int powerConsumed, costPerKW;

    printf("사용한 전력량(kW)을 숫자형태로 입력하세요: ");
    scanf("%d", &powerConsumed);
    printf("전력 요금(1kW당 비용)을 숫자형태로 입력하세요: ");
    scanf("%d", &costPerKW);
    
    long long totalCost = (long long)powerConsumed * costPerKW;

    printf("전기 요금: %lld\n", totalCost);

    return 0;
}