#include<stdio.h>
int transpose(int arr[][3],int row, int col){
    int i,j;
    for(i=0;i<row;i++){
      for(j=i+1;j<col;j++){
          if(arr[i][j] != arr[j][i]){
              int temp = arr[i][j];
              arr[i][j] = arr[j][i];
              arr[j][i] = temp;
          }
      }
    }
    /*printf("after transpose array\n");
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         printf("%d ",arr[i][j]);
      }
      printf("\n");
    }*/

}
int main(){
    int i,j;
    int arr[3][3]={
       {1,4,4},
       {2,2,3},
       {2,8,8},
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
    
    /*for(i=0;i<row;i++){  
      for(j=i+1;j<col;j++){
          if(arr[i][j] != arr[j][i]){
	      int temp = arr[i][j];
	      arr[i][j] = arr[j][i];
	      arr[j][i] = temp;
	  }
      }
    }*/
    printf("after transpose array\n");
    for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         printf("%d ",arr[i][j]);    
      }
      printf("\n");
    }

}
