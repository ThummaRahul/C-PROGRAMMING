#include<stdio.h>
int main(){

	int arr[5]={10,20,30,40,50};
	int n = 5;
	printf("Before - shifting\n");
	for(int j=0;j<n;j++){
                printf("%d ",arr[j]);
        }
	printf("\n");
	//int n = sizeof(arr)/sizeof(arr[0]);
	//printf("enter n value\n"); scanf("%d",&n);
	for(int i=n-1;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=0;
	printf("after right shifting\n");
        for(int j=0;j<n;j++){
		printf("%d ",arr[j]);
        }	
}
