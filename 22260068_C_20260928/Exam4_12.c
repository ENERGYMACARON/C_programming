#include <stdio.h>

int main() 
{
    int a = 0x5555, b = 0x00ff;

    printf("a = %x, b = %x\n", a, b);
    printf("~a = %x, ~b = %x\n", ~a, ~b);
    printf("a & b = %x\n", a & b);
    printf("a | b = %x\n", a | b);
    printf("a ^ b = %x\n", a ^ b);

    return 0;
}