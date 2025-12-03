#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int check_uni(int *arr,int i);

int check_prime(int *n){
	int cnt=0;
	for(int i=1;i<=*n;i++){
		if(*n%i==0)
			cnt++;
	}
	if(cnt==2){
		return 1;
	}else{
		return 0;    
	}
}
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

	if(m > 100){
		printf("UNIQUE VALUES ARE NOT IN THE RANGE\n");
	}

	int i=0;
	while(i<m){
		arr[i] = rand()%100;
		if(check_prime(&arr[i])){
			if(!check_uni(arr,i)){
				i++;
			}

		}

	}

	for(int j = 0; j < m; j++) {
		printf("%d ", arr[j]);
	}

}
