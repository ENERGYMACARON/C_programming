#include <stdio.h>

int findMax(int numbers[], int size);

int main() {
    int numbers[10] = {10,52,23,74,15,67,38,29,40,51};

    int max_value = findMax(numbers, 10);

    printf("배열의 최댓값은 %d입니다.\n", max_value);

    return 0;
}

int findMax(int numbers[], int size) {
    int max = numbers[0];

    for(int i=1; i<size; i++) {
        if(numbers[i]>max) {
            max = numbers[i];
        }
    }
    return max;
}