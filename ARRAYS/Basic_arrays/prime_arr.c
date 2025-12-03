#include<stdio.h>
int check_prime(int n){
    int cnt =0;
    for(int i=1;i<=n;i++){
          if(n%i==0)
               cnt++;		  
    }
    
    if(cnt==2){
         return 1;
    }
    else {
        return 0;
    }
}
int main(){
    
	int n = 10;
        int cnt;
	int arr[10]={3,4,5,6,7,8,7,8,9,11};
        printf("before print\n");
        for(int i=0;i<n;i++){
               printf("%d ",arr[i]);
        }

	printf("\nafter print\n");
	for(int i=0;i<n;i++){
	  if(check_prime(arr[i])){
	       printf("%d ",arr[i]);
         	  cnt++;
	  }
	}
	
	printf("count: %d",cnt);
	

}
