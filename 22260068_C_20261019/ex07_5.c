#include <stdio.h>
int function3();

int main() {
    int result3 = function3();
    printf("function3의 반환값: %d\n", result3);

    return 0;
}

int function3() {
    printf("매개변수가 있고 반환값이 없는 함수\n");
    printf("매개변수: 없음\n");
    printf("반횐값 있음: 42\n");

    return 42;
}