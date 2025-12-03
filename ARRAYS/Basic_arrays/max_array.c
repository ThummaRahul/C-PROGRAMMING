#include<stdio.h>
int main(){
	int arr[4]={9,8,6,5};
	int n = 4;
	int res = arr[0];
	for(int i=0;i<n;i++){
		if(res < arr[i]){
			res = arr[i];
		}
	}
	printf("%d",res);
}

