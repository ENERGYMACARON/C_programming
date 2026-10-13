#pragma warning(disable:4996)
#include <stdio.h>

int main() 
{
    char first, second;
    printf("MBTI의 첫번재와 두번째 글자를 입력하세요. (E/I OR N/S): ");
    scanf(" %c %c", &first, &second);

    // 첫번째 글자가 외향 내향인 경우
    if(first == 'E') {
        printf("당신은 외향적인 성격을 가지고 있어요. \n");
        if(second == 'S') {
            printf("감각형 이랍니다. \n");
        } else if(second == 'N') {
            printf("직관형 이랍니다.");
        }
    }
    else if (first == 'I') {
        printf("당신은 내향적인 성격을 가지고 있어요. \n");
        if (second == 'S') {
            printf("감각형 이랍니다. \n");
        } 
        else if (second =='N') 
        {
            printf("직관적 이랍니다. \n");
        }
    }

    char third, fourth;

    printf("MBTI의 세번재와 네번째 글자를 입력하세요. (F/T OR P/J): ");
    scanf(" %c %c", &third, &fourth);

    // 세번째 글자가 사고형인지 감정형인지
    if (third == 'T') {
        printf("논리적이고 객관적으로 판단하는 사고형입니다.\n");  
        if (fourth == 'J') { 
            printf("계획형입니다.\n");
        }
        else if (fourth =='P') 
        {
            printf("즉흥적입니다.\n"); 
        } 
    }
    else if (third == 'F') { 
    printf("감정적이고 사람 중심적으로 판단하는 감정형입니다.\n"); 
    if (fourth == 'J') { 
        printf("계획형입니다.\n"); 
    }
    else if (fourth == 'P') { 
    printf("즉흥적입니다.\n"); 
    }
    return 0;
}