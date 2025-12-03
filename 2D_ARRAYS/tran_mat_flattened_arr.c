#include <stdio.h>

void transpose(int *arr, int row, int col) {
    int i, j;
    for(i = 0; i < row; i++) {
        for(j = i + 1; j < col; j++) {
            // Swap elements using pointer arithmetic
            int temp = *(arr + i * col + j);
            *(arr + i * col + j) = *(arr + j * col + i);
            *(arr + j * col + i) = temp;
        }
    }
}

int main() {
    int i, j;
    int arr[3][3] = {
        {1, 4, 4},
        {2, 2, 3},
        {2, 8, 8},
    };

    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    printf("Input array:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    transpose((int *)arr, row, col);  // Cast 2D array to int pointer

    printf("\nAfter transpose:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

