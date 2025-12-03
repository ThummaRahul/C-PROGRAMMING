#include<stdio.h>
int main(){
   int i,j,temp[30];
   int arr[5][5]={
   {10,20,30,40}, //100
   {15,10,15,20}, // 60
   {10,30,60,90}, //190
   {30,30,30,30}, //120
   {100,20,20,100}, // 240
   };
   int sum=0;
   int row=5;
   int col=5;
   for(i=0;i<row;i++){
      for(j=0;j<col-1;j++){
	      printf("%d ",arr[i][j]);
      }
      printf("\n");
   }
   int k=0;
   for(i=0;i<1;i++){
      for(j=0;j<col-1;j++){
	      sum +=arr[i][j];
      }
      temp[k++]=sum;
      printf("\n");
   }
   int max_sum = sum;
   for(i=1;i<row;i++){
      for(j=0;j<col-1;j++){
              sum += arr[i][j] -arr[i-1][j];
      }
      temp[k++]=sum;
      if(sum > max_sum){
         max_sum = sum;
      }
   }
   printf("%d\n",max_sum);
   printf("\n");
   for(int x=0;x<row;x++){
	   printf("%d ",temp[x]);
   }

}
