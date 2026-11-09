#pragma warning(disable:4996)
#include <stdio.h>

void reservationStatus(int numHotels, int numFloors, int numRooms, int hotelStatus[1][5][4]);

int main() {
    int numHotels = 1; // 호텔 수
    int numFloors = 5; // 각 호텔의 층 수
    int numRooms = 4; // 각 층의 방 수
    int hotelStatus[1][5][4] = {0}; // [호텔][층][방] 배열 초기화

    int floor, room;
    char option;

    // 초기 예약 상태 출력
    reservationStatus(numHotels, numFloors, numRooms, hotelStatus);

    // 예약 받기
    do {
        // 유효한 층 입력
        do {
            printf("\n예약할 층을 선택하세요 (1~5): ");
            scanf("%d", &floor);
            if (floor < 1 || floor > numFloors) {
                printf("잘못된 층 번호입니다. 1부터 %d까지의 값을 입력하세요.\n", numFloors);
            }
        } while (floor < 1 || floor > numFloors);

        // 유효한 방을 입력
        do {
            printf("예약할 방을 선택하세요 (1~4): ");
            scanf("%d", &room);
            if (room < 1 || room > numRooms) {
                printf("잘못된 방 번호입니다. 1부터 %d까지의 값을 입력하세요. \n", numRooms);
            }
        } while (room < 1 || room > numRooms);

        // 예약처리
        if (hotelStatus[0][floor-1][room -1] == 0) {
            hotelStatus[0][floor-1][room-1] = 1;
            printf("총 %d, 방 %d 상태를 예약하셨습니다.\n", floor, room);
            }
            else {
                printf("총 %d, 방 %d은 이미 예약되었습니다. \n", floor, room);
            }

            printf("다른 방도 예약하시겠습니까? (y/n): ");
            scanf(" %c", &option);

    } while (option == 'y' || option == 'Y');

    // 최종 예약 상태 출력
    printf("\n최종 예약 상태:\n");
    reservationStatus(numHotels, numFloors, numRooms, hotelStatus);

    return 0;
}

// 예약 상태를 출력하는 함수
void reservationStatus(int numHotels, int numFloors, int numRooms, int hotelStatus[1][5][4]) {
    printf("호텔 예약 상태 (0: 예약 가능, 1: 예약됨)\n");
    for(int h=0; h<numHotels; h++) {
        for(int f=0; f<numFloors; f++) {
            for(int r=0; r<numRooms; r++) {
                printf("총 %d, 방 %d 성태: %s\n", f+1, r+1, hotelStatus[h][f][r] ? "에약됨" : "예약 가능");
            }
        }
    }
}