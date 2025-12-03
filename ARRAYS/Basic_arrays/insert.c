#include<stdio.h>
int main(){

	int n=3,val,pos;
	int arr[100];
	printf("enter elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("enter pos:");scanf("%d",&pos);
	printf("enter val:");scanf("%d",&val);


	for(int i=n;i>pos;i--){
		arr[i]=arr[i-1];
	}

	arr[pos]=val;
        n++;


	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

}
