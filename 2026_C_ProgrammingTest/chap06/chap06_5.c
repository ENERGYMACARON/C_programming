#include <stdio.h>

int main() {
    for(int i=1; i<=29; i++) {
        int last_digit = i % 10;

        if (last_digit == 3 || last_digit == 6 || last_digit == 9) {
            printf("짝 ");
        } else {
            printf("%d ", i);
        }

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}