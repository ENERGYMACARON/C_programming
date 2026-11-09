#include <stdio.h>

int main() {
    int x,y;
    printf("밑변, 높이의 길이: ");
    scanf("%d %d", &x, &y);

    float answer = (float)(x*y)/2;
    printf("삼각형의 넓이: %.f", answer);

    return 0;
}