#include<stdio.h>
int main(){
	int n=5;
	int val,flag=0;
	printf("enter value\n"); scanf("%d",&val);
	int arr[5]={10,20,30,40,50};
	for(int j=0;j<n;j++){
		if(arr[j]==val){
			flag=1;
			printf("%dvalue is found at index %d",val,j);
	
		}
	} 
		if(flag == 0){
		   printf("%d value is not found",val);
		}

	


}
