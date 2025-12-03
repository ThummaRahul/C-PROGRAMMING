#include<stdio.h>
void print(int *a, int n);
void input(int *a, int n);

void high(int *arr, int n){
	int max = arr[0];
		for(int i=0;i<n;i++){
			if(max < arr[i]){
				max = arr[i];
			}
		}
	printf("\nmax value=%d",max);

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
	high(arr,5);

}
