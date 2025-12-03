/* wap to move all the vowels at the beginning
 * input: "bcdefghiabc"
 * o/p: "eiabcdfghbc"                   */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int is_prime(int n){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cnt++;
		}
	}
	if(cnt==2){
		return 1;
	}
	else{
		return 0;
	}
}
int check_unique(int *arr, int i){
	if(i<=0) return 0;
	for(int j=0;j<i;j++){
		if(arr[j]==arr[i]){
			return 1;
		}
	}
	return 0;
}
int main(){
	srand(getpid());
	int temp=0,n,j=0,i;
	int arr[100];
	printf("enter num:\n"); scanf("%d",&n);
	if(n > 10){
		printf("UNIQUE VALUES ARE NOT IN THE RANGE\n");
	}

	while(temp<n){
		for(i=0;i<n;i++){
			arr[i] = rand()%20;
			if(check_unique(arr,i)){
				--i;
			}
		}
		temp++;
	}
	for(i=0;i<n;i++){
		if(is_prime(arr[i])){
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j]=temp;
                                j++;
                        }
	}
	for(int k=0;k<n;k++){
		printf("%d ",arr[k]);
	} 

}
