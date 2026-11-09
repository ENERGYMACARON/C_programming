#include <stdio.h>

int main() {
    double input, tax;
    printf("종합 소득을 입력하세요(만 원): ");
    scanf("%lf", &input);

    if(input <= 1200) {
        tax = input * 0.06;
    } else if (input <= 4600) {
        tax = input * 0.15 - 108;
    } else if (input <= 8800) {
        tax = input * 0.24 - 522;
    } else if (input <= 15000) {
        tax = input * 0.35 - 1490;
    } else if (input <= 30000) {
        tax = input * 0.38 - 1940;
    } else if (input <= 50000) {
        tax = input * 0.40 - 2540;
    } else if (input <= 100000) {
        tax = input * 0.42 - 3540;
    } else {
        tax = input * 0.45 - 6540;
    }

    printf("소득세는 %.2f 만 원입니다.\n", tax);

    return 0;
}