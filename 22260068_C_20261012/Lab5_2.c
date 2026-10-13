#pragma warning(disable:4996)
#include <stdio.h>

int main() 
{
    int x, y;

    printf("x 좌표를 입력하세요: ");
    scanf("%d", &x);
    printf("y 좌표를 입력하세요: ");
    scanf("%d", &y);

    if(x > 0 && y > 0) {
        printf("(%d, %d) 좌표는 제 1 사분면에 있습니다.\n", x, y);
    }
    else if(x < 0 && y > 0) {
        printf("(%d, %d) 좌표는 제 2 사분면에 있습니다.\n", x, y);
    }
    else if(x < 0 && y < 0) {
        printf("(%d, %d) 좌표는 제 3 사분면에 있습니다.\n", x, y);
    }
    else if(x > 0 && y < 0) {
        printf("(%d, %d) 좌표는 제 4 사분면에 있습니다.\n", x, y);
    } else if (x==0 && y==0) {
        printf("(%d, %d) 좌표는 원점입니다.\n", x, y);
    }
    else if (x==0) {
        printf("(%d, %d) 좌표는 y축 위에 있습니다.\n",x,y);
    }
    else {
        printf("(%d, %d) 좌표는 x축 위에 있습니다.\n",x,y);
    }

    return 0;
}