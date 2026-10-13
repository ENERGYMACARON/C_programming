#pragma warning(disable:4996)
#include <stdio.h>

#define START 0
#define MOVE 1
#define WORK 2
#define STOP 3

int main() {
    int currentSate = START;
    int input;

    while(1) {
        switch (currentSate)
        {
        case START:
            printf("로봇 시작 상태입니다.\n");
            printf("(1) 이동 상태로 변경\n");
            printf("상태 입력>> ");
            scanf("%d", &input);
            printf("입력하신 번호: %d\n", input);
            if (input == 1) {
                currentSate = MOVE;
            }
            else {
                printf("잘못된 입력입니다. 다시 입력하세요.\n");
            }
            break;
        case MOVE:
            printf("로봇 이동 중입니다.\n");
            printf("(2) 작업 상태로 변경\n");
            printf("상태 입력>> ");
            scanf("%d", &input);
            printf("입력하신 번호: %d\n", input);
            if (input == 2) {
                currentSate = WORK;
            }
            else {
                printf("잘못된 입력입니다. 다시 입력하세요.\n");
            }
            break;

        case WORK:
            printf("로봇 작업 중입니다.\n");
            printf("(3) 종료 상태로 변경\n");
            printf("상태 입력>> ");
            scanf("%d", &input);
            printf("입력하신 번호 %d\n", input);
            if (input == 3) {
                currentSate = STOP;
            }
            else {
                printf("잘못된 입력입니다. 다시 입력하세요.\n");
            }
            break;
        
        case STOP:
            printf("로봇이 종료되었습니다. \n");
            return 0; 
        
        default:
            printf("알 수 없는 상태입니다. \n");
                return 1;
        }
    }
    return 0;
}