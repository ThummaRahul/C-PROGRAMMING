#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//int rand(void);

//void srand(unsigned int seed);


int main(){
	srand(getpid());
	int m;
	int arr[100];
	printf("enter num:\n"); scanf("%d",&m);


	int temp=0;
	while(temp<m){
		for(int i=0;i<m;i++){
			arr[i] = rand()%10;
		}

		temp++;

	}
	for(int j=0;j<m;j++){
		printf("%d ",arr[j]);
	}

}
