#include <stdio.h>
long factorial(int n);

int main() {
    int number = 5;
    long result = factorial(number);

    printf("%d! = %d\n", number, result);

    return 0;
}
long factorial(int n) {
    long fac = 1;
    for(int i=n; i>=1; i--)
        fac = fac * i;
    return fac;
}