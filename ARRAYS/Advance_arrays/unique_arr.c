#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int check_uni(int *arr,int i){
	if(i<=0) return 0;
    for(int j=0;j<i;j++){
      if(arr[j]==arr[i]){
        return 1;
      
      }
    
    }
    return 0;

}
int main(){
	srand(getpid());
	int m;
	int arr[100];
	printf("enter num:\n"); scanf("%d",&m);
     
	if(m > 10){
	    printf("UNIQUE VALUES ARE NOT IN THE RANGE\n");
	}

	int temp=0;
	while(temp<m){
		for(int i=0;i<m;i++){
			arr[i] = rand()%10;
			if(check_uni(arr,i)){
			--i;
			}
		}

		temp++;

	}
	for(int j=0;j<m;j++){
		
		  
	  printf("%d ",arr[j]);
			
		
	}

}
