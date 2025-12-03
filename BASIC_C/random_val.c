#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
  
	srand(getpid());
	int n,m;
        printf("enter n:\n"); scanf("%d",&n);

	int temp =0;
	while(temp<n){
	   m = rand()%10;
	      
	   printf("%d ",m);
	   
	   temp++;
	}
}
