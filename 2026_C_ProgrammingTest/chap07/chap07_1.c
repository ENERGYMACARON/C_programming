#include <stdio.h>
int discountedPrice(int price, int rate);

int main() {
    int price, rate, result;

    printf("상품 가격 : ");
    scanf("%d", &price);

    printf("할인율(%%) : ");
    scanf("%d", &rate);

    result = discountedPrice(price, rate);

    printf("할인 가격은 %d\n", result);

    return 0;
}

int discountedPrice(int price, int rate) {
    return price - (price * rate / 100);
}