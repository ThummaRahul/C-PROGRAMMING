#include<stdio.h>
int main(){
    int i,j;
    int sum[3][3];
    int row=sizeof(sum)/sizeof(sum[0]);
    int col=sizeof(sum[0])/sizeof(sum[0][0]);

    int arr1[3][3]={
       {1,2,3},
       {1,2,3},
       {2,3,2},
    };
    int arr2[3][3]={
       {1,1,1},
       {1,1,1},
       {1,1,1},
    };
    printf("input1 array\n");
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         printf("%d ",arr1[i][j]);
      }
      printf("\n");
    }
    printf("input2 array\n");
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         printf("%d ",arr2[i][j]);
      }
      printf("\n");
    }
    for(i=0;i<row;i++){  
      for(j=0;j<col;j++){
          sum[i][j]=(arr1[i][j]+arr2[i][j]);
      }
    }
    printf("sum array\n");
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         printf("%d ",sum[i][j]);    
      }
      printf("\n");
    }

}
