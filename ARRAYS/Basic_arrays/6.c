#include<stdio.h>
int main(){
	int arr[5]={11,12,13,14,15};
	int n = 5;
	int val;


	printf("enter value want to delete:\n"); scanf("%d",&val);

	for(int j=0;j<n;j++){
		if(arr[j]==val){
			for(int i=j; i<n-1 ;i++){
				arr[i]=arr[i+1]; 
			}
			n--;
			break;
			
		}
	}


	for(int j=0;j<n;j++){
		printf("%d ",arr[j]);
	}
}
