#include<stdio.h>
void print(int *a, int n);
void input(int *a, int n);
void sec_high(int *arr, int n);

void high_num(int *arr, int n){
	int high = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>high){
			high = arr[i];
		}
	}
	printf("\nHighest value=%d",high);

}
void sec_high(int *arr, int n){
	int high = arr[0],sec=arr[0];

	for(int i=0;i<n;i++){
		if(arr[i]>high){
			sec = high;
			high = arr[i];
		}

		else if( arr[i] > sec && arr[i] != high){
			sec = arr[i];
		}
	}
	printf("\nsec highest value=%d",sec);

}
void print(int *a, int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}

}

void input(int *a,int n){
	printf("enter the input\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int main(){
	int arr[5];
	input(arr,5);
	print(arr,5);
	high_num(arr,5);
	sec_high(arr,5);
}
