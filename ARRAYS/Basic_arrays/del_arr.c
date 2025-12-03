#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int n = 5;
	int pos;

	printf("enter position:\n"); scanf("%d",&pos);
	//printf("enter value want to delete:\n"); scanf("%d",&val);
        printf("the array elemnts:");
	for(int j=0;j<n;j++){
                printf("%d ",arr[j]);
        }
        printf("\n");
	for(int i=pos; i<n ;i++){
		arr[i-1]=arr[i];
		//arr[i]=arr[i+1];
                printf("arr[i-1]=%d\n",arr[i-1]);
           	printf("arr[i]=%d\n",arr[i]);

	}
	//arr[pos]=arr[i];
	
	n--;
	for(int j=0;j<n;j++){
		printf("%d ",arr[j]);
	}
}
