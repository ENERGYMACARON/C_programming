#include <stdio.h>

int main() {
    int a = 5, b = 5, d;

    a++;
    --a;

    --b;
    d = b++;

    b++;

    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("d=%d\n", d);
}