#include <stdio.h>

void transpose(int arr[][2], int row, int col) {
    int i, j;
    int result[2][3]; // Transpose matrix will be col x row

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            result[j][i] = arr[i][j];
        }
    }

    printf("After transpose array:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[][2] = {
        {1, 4},
        {2, 7},
        {3, 8},
    };

    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    int i, j;

    printf("Input array:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    transpose(arr, row, col);

    return 0;
}

