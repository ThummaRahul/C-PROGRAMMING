#include<stdio.h>
#include<stdlib.h>
int** transpose(int** arr, int row, int col) {
    int i, j;
    int** transposed = (int**)malloc(col * sizeof(int*));
    for (i = 0; i < col; i++) {
        transposed[i] = (int*)malloc(row * sizeof(int));
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            transposed[j][i] = arr[i][j];
        }
    }

    printf("After transpose:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return transposed;
}  
int main(){
    int i,j;
    int row = 2, col = 3;

    // Dynamically allocate memory for a 3x3 matrix using double pointer
    int **arr = (int **)malloc(row * sizeof(int *));
    for (i = 0; i < row; i++) {
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    // Initialize array
    int temp[2][3] = {
        {1, 4, 4},
        {2, 2, 3},
    };

    // Copy values from temp to dynamically allocated arr
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            arr[i][j] = temp[i][j];
        }
    }
    printf("input array\n");
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         printf("%d ",arr[i][j]);
      }
      printf("\n");
    }

    transpose(arr,row,col);
    free(arr);
}
