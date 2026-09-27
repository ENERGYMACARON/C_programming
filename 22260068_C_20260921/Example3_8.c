#include <stdio.h>

int main()
{
    int decimal = 42;
    int hexadecimal = 0x2A;
    int octal = 052;
    int binary = 0b101010;

    printf("Decimal: %d\n", decimal);
    printf("Hexadecimal: %x\n", hexadecimal);
    printf("Octal: %o\n", octal);
    printf("Binary: %d\n", binary);

    return 0;
}