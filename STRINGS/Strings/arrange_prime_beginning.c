/* wap to move all the vowels at the beginning
 * input: "bcdefghiabc"
 * o/p: "eiabcdfghbc"                   */

#include<stdio.h>
#include<string.h>
int is_prime(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
         if(n%i==0){
	    cnt++;
	 }
    }
    if(cnt==2){
         return 1;
    }
    else{
       return 0;
    }
}
int main(){
  int arr[]={1,2,3,4,5,6,7,3,2,1},temp;
  int n = sizeof(arr)/sizeof(arr[0]);
  int j=0;
  for(int i=0;i<n;i++){
      if(is_prime(arr[i])){    
	    temp = arr[i];
	    arr[i] = arr[j];
	    arr[j] = temp;
	    j++;
      }
  }
  for(int k=0;k<n;k++){
	  printf("%d ",arr[k]);
  }
  
}
