#include <stdio.h>
#include <stdlib.h>

// Function to transpose a square matrix using double pointers
void transpose(int **arr, int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = i + 1; j < col; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    printf("After transpose array:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row = 3, col = 3;
    int i, j;

    // Dynamically allocate memory for a 3x3 matrix using double pointer
    int **arr = (int **)malloc(row * sizeof(int *));
    for (i = 0; i < row; i++) {
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    // Initialize array
    int temp[3][3] = {
        {1, 4, 4},
        {2, 2, 3},
        {2, 8, 8}
    };

    // Copy values from temp to dynamically allocated arr
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            arr[i][j] = temp[i][j];
        }
    }

    printf("Input array:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    transpose(arr, row, col);

    // Free allocated memory
    for (i = 0; i < row; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

