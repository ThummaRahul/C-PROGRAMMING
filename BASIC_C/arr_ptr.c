#include<stdio.h>
void input(int *a,int n);
void print(int *a, int n){
      for(int i=0;i<n;i++){
          printf("%d ",a[i]);
       }

}
void input(int *a,int n){
       for(int i=0;i<n;i++){
          scanf("%d",&a[i]);
       }
}

int main(){
   int arr[5];
   input(arr,5);
   print(arr,5);

}
