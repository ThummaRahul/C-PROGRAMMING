#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
  
	srand(getpid());
	int min,max,m;
        printf("enter min:\n"); scanf("%d",&min);
        printf("enter max:\n"); scanf("%d",&max);

	m = rand()%((max-min)+1)+min;
	printf("%d ",m);
	   
}
