#include <stdio.h>

int main() {
    int a, b, max, lcm;

    printf("양의 정수를 2개 입력하시오: ");
    scanf("%d %d", &a, &b);

    if(a > b) {
        max = a;
    } else {
        max = b;
    }

    for (int i = max; i<a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    printf("최소공배수 = %d\n", lcm);

    return 0;
}