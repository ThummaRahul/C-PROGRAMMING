#include<stdio.h>
int transpose(int arr[][3],int row, int col){
    int i,j;
    int tran[3][2];
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
              tran[j][i]=arr[i][j];
          }
    }
    printf("after transpose array\n");
    for(i=0;i<col;i++){
      for(j=0;j<row;j++){
         printf("%d ",tran[i][j]);
      }
      printf("\n");
    }
}
int main(){
    int i,j;
    int arr[][3]={
       {1,4,4},
       {2,2,3},
    };
    int row=sizeof(arr)/sizeof(arr[0]);
    int col=sizeof(arr[0])/sizeof(arr[0][0]);

    printf("input array\n");
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         printf("%d ",arr[i][j]);
      }
      printf("\n");
    }

    transpose(arr,row,col);

}
