#include<stdio.h>
int main(){
        
	int n,val,pos;
	printf("enter n :\n"); scanf("%d",&n);
	int arr[100];
	printf("enter 3 elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	printf("enter val:");scanf("%d",&val);
        //val = arr[0];
	for(int k=0;k<n;k++){
		if(arr[k]==val){
			for(int i=k;i<n;i++){
				arr[i]=arr[i+1];
			}
			n--;
			break;
		}
	}

	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

}
