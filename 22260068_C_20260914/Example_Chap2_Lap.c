#include <stdio.h>

int main()
{
    printf("### 형식 지정자 적용 ###\n");
    printf("12345678901234567890\n");
    printf("%10c\n", 'A');
    printf("%10d\n", 128);
    printf("%10lf\n", 3.1415926);
    printf("%10.3lf\n", 3.1415926);
    printf("%10.4s\n", "Love is");    
}