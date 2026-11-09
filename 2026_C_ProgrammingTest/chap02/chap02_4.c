#include <stdio.h>

int main() {
    int x,y;
    float answer;

    printf("밑변: ");
    scanf("%d", &x);

    printf("높이: ");
    scanf("%d", &y);

    answer = (float)(x*y)/2;
    printf("넓이: %.1f", answer);

    return 0;
}