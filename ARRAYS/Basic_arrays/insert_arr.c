#include<stdio.h>
int main(){
	int arr[6]={1,2,3,4,5};
	int n = 6;
	int pos,val;

	printf("enter position:\n"); scanf("%d",&pos);
	printf("enter new value:\n"); scanf("%d",&val);

	for(int i=n-1;i>pos;i--){
		
		arr[i]=arr[i-1];

	}
	
	arr[pos]=val;
	
	for(int j=0;j<n;j++){
		printf("%d ",arr[j]);
	}
}
