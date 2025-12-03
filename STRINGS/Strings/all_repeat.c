#include<stdio.h>
int main()
{
	int n,i,j,cnt;
	printf("enter n value"); scanf("%d",&n);
	int arr[n];
	printf("enter array elements\n");
	printf("\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	//printf("\n");
	printf("*********OUR MAIN ARRAY******\n");
		for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
	printf("\n");
	printf("****** NON - REAPEATED *****\n");
	printf("\n");
	for(i=0;i<n;i++){
		cnt=0;
		for(j=0;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
		}
		if(cnt == 1){
			printf("%d ",arr[i]);
		}

	}
	printf("\n");
	printf("****** NON - REAPEATED *****\n");
	printf("\n");
	for(i=0;i<n;i++){
		cnt=0;
		for(j=0;j<n;j++){
			if(i > j && arr[i]==arr[j]){
				cnt++;
			}
		}
		if(cnt == 1){
			printf("%d ",arr[i]);
		}

	}
}
