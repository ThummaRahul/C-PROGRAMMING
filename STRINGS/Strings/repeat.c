#include<stdio.h>
int main()
{

	int arr[6]={1,2,3,3,5,2};
	int n = 6;  //sizeof(a)/sizeof(a[0]);
        
	int  cnt,i,j;
	printf("---------OUR ORG ARRAY----------\n");
	for( j=0;j<n;j++){
	    printf("%d ",arr[j]);
	}
	printf("\n");
	printf("---------REPEAT ELEMNETS-----------=\n");

        for(int i=0;i<n;i++){
		cnt=0;
		for(int j=0;j<n;j++){
			if(i > j && arr[i] == arr[j]){
				cnt++;
			}
		}
		if(cnt == 1){
			printf("%d ",arr[i]);
		}else {
		  printf("No repeat elements\n");
			  return 0;
		}


	}           
        printf("\n");	
	printf("NON REPEAT ELEMNETS=\n");
	
	for(int i=0;i<n;i++){
		cnt=0;
		for(int j=0;j<n;j++){
			if(arr[i] == arr[j]){
				cnt++;
			}
		}
		if(cnt==1){
			printf("%d ",arr[i]);
		}

	}
}
