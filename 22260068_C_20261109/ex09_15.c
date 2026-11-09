#pragma warning(disable:4996)
#include <stdio.h>

void gradePrint(int grade[3][3]);

int main() {
    int i,j, tot=0, avg=0;
    int grade[3][3];
    for(i=0; i<3; i++) {
        printf("%d번째 학생의 국어, 영어, 수학 점수 입력 : ", i+1);
        for (j=0; j<3; j++) {
            scanf("%d", &grade[i][j]);
        }        
    }
    gradePrint(grade);

    return 0;
}

void gradePrint(int grade[3][3]) {
    int i,j, tot=0;
    double avg = 0;
    printf("\n");
    printf(" ============================================ \n");
    printf("                   성 적 표                   \n");
    printf(" ============================================ \n");
    printf(" 번호   국어   영어   수학   총점   평균   학점\n");

    for(i=0; i<3; i++) {
        printf("%d\t", i+1);
        for(j=0; j<3; j++) {
            tot = tot + grade[i][j];
            printf(" %d \t", grade[i][j]);
        }
        avg = tot/3;
        printf("%d\t %.2lf\t", tot, avg);
        tot = 0;
        if (avg >= 90) printf("A\n");
        else if ((avg<90) && (avg>=80)) printf("B\n");
        else if ((avg<80) && (avg>=70)) printf("C\n");
        else if ((avg<70) && (avg>=60)) printf("D\n");
        else printf("F\n");
    }
    printf(" ============================================ \n");
}