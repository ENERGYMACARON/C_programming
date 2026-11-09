#include <stdio.h>

int main() {
    double weight, height, bmi;

    printf("체중(kg)을 입력하세요: ");
    scanf("%lf", &weight);

    printf("키(m)를 입력하세요: ");
    scanf("%lf", &height);

    if(weight <= 0 || height <= 0) {
        printf("올바른 체중과 키를 입력하세요.\n");
        return 1;
    }

    bmi = weight / (height * height);

    printf("당신의 BMI는 %.2f입니다.\n", bmi);

    if(bmi < 18.5) {
        printf("저체중입니다.\n");
    } else if(bmi < 24.9) {
        printf("표준 체중입니다.\n");
    } else {
        printf("과체중입니다.]n");
    }

    return 0;
}