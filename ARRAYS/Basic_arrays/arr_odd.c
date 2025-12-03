#include<stdio.h>
int check_odd(int n){
   if(n%2 !=0){
       return 1;
   }
   else{
      return 0;
   }

}

int main(){
    //int n=5;
    //int arr[5]={1,2,3,4,5};
    //for(int i =0;i<n;i++){
    //    printf("%d\n",arr[i]);}
    int n; 
    printf("enter n value\n"); scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j=0;j<n;j++){
        if(check_odd(arr[j])){
	  printf("%d ",arr[j] );
	}
    }
}
