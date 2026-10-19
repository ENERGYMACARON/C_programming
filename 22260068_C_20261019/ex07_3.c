#include <stdio.h>
void function1();

int main() {
    function1();
}

void function1() {
    printf("매개변수도 없고 반환값도 없는 함수\n");
    printf("매개변수: 없음\n");
    printf("반환값 없음: void\n");
}