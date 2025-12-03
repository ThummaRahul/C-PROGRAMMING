#include<stdio.h>
int main(){
    int arr[]={1,2,3,1,2,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int is_visited[n];
    for(int i=0;i<n;i++){
        is_visited[i]=0;
    }
    for( int i=0;i<n;i++){
	  if(is_visited[i]==1)
		  continue;
	  int count=1;
          for( int j=i+1;j<n;j++){
		  if(arr[i]==arr[j]){
		    count++;
		    is_visited[j]=1;
		  }
	  
	  }
	  printf("char: %d count: %d times\n",arr[i],count);
    }
}
