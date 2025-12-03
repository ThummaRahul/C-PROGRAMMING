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
   /*for(i=0;i<row;i++){
      for(j=0;j<col-1;j++){
	      printf("%d ",arr[i][j]);
      }
      printf("\n");
   }*/
   int k=0;
   int index=0;
   for(i=0;i<1;i++){
      for(j=0;j<col-1;j++){
	      sum +=arr[i][j];
	      index++;
	      index=i;
      }
      arr[i][col-1]=sum;
      printf("\n");
   }
  
   int max_sum = sum;
   for(i=1;i<row;i++){
      for(j=0;j<col-1;j++){
              sum += arr[i][j] -arr[i-1][j];
      }
      arr[i][col-1]=sum;
      if(sum > max_sum){
         max_sum = sum;
	 index++;
	 index=i;
      }
   }
   printf("subject wise marks of students\n   c      c++   linux  ARM\n");   
   for(i=0;i<row;i++){
      for(j=0;j<col-1;j++){             //j<col for entair 5*5 
              printf("  %3d  ",arr[i][j]);
      }
      printf("\n");
   }

   for (i = 0; i < row; i++) {
        printf("student %d total marks = %d\n",i, arr[i][col - 1]);
   }
   printf("\n");
   printf("Topper of the class is student %d with total marks = %d\n",index,max_sum);
   printf("\nTopper in each subject:\n");
   for (j = 0; j < col - 1; j++) {  // For each subject column
    int max_mark = arr[0][j];
    int topper_index = 0;
    for (i = 1; i < row; i++) {
        if (arr[i][j] > max_mark) {
            max_mark = arr[i][j];
            topper_index = i;
        }
    }
    printf("Subject %d topper is student %d with marks = %d\n", j, topper_index, max_mark);
  }
}
