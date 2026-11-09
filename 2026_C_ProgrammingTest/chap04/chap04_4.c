#include <stdio.h>

int main() {
    float a,b;
    int time, hour, minute, second;

    printf("거리(km), 속력: ");
    scanf("%f %f", &a, &b);


    time = (int)(a/b*3600);
    hour = time / 3600;
    minute = (time % 3600) / 60;
    second = time % 60;

    printf("자동차의 주행 시간: %d시간 %d분 %d초\n", hour, minute, second);

    return 0;
}