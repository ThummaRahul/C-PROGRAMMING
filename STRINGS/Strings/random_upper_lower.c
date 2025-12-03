#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
/*int check_uni(int *arr,int i){
  if(i<=0) return 0;
  for(int j=0;j<i;j++){
  if(arr[j]==arr[i]){
  return 1;

  }

  }
  return 0;

  }*/
int main(){
	srand(getpid());
	int m;
	int str[100];
	printf("enter num:\n"); scanf("%d",&m);


	for(int i=0;i<m;i++){
	        int ch = rand()%2;
		if(ch == 1){
			str[i]='A'+rand()%26;
		}else{
			str[i]='a'+rand()%26;
		}

	}
	for(int j=0;j<m;j++){


		printf("%c ",str[j]);


	}
}
