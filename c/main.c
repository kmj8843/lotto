#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int arr[], int count) {
    int temp;

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int result[6];

    for (int i = 0; i < 6;) {
        int random = rand() % 46;
        int isContain = 1;
        for (int j = 0; j < i; j++)
            if (result[j] == random) {
                isContain = 0;
                break;
            }
        
        if ( isContain ) result[i++] = random;
    }

    bubble_sort(result, 6);

    printf("C => [ %d, %d, %d, %d, %d, %d ]", result[0], result[1], result[2], result[3], result[4], result[5]);

    return 0;
}