#include<stdio.h>


int main(){
        int arr[5];
	int n = 5;
	for(int j=0;j<n;j++){
		scanf("%d",&arr[j]);
	}
	//int arr[5]={1,2,3,4,5};
	//int n=5;
        //int n = sizeof(arr)/sizeof(arr[0]);
	printf("array is\n");
	for(int i=0;i<n;i++){
	     printf("%d ",arr[i]);
	}
	printf("\nreverse that array\n");
	for(int k=n-1;k>=0;k--){
	    printf("%d ",arr[k]);
	}

}
