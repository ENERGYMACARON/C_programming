#include <stdio.h>

void increment();

int main() {
    increment();
    increment();
    increment();
    return 0;
}

void increment() {
    static int count = 0;
    count++;
    printf("Static Count: %d\n", count);
}