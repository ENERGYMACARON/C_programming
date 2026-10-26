#include <stdio.h>

void printValue();
int globalVar = 10;


int main() {
    printValue();
    globalVar = 20;
    printValue();

    return 0;
}

void printValue() {
    printf("globalVar = %d\n", globalVar);
}
