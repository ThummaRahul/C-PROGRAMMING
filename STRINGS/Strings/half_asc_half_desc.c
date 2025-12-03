#include<stdio.h>
void *check_asc(int *arr,int n){
    for(int i=0;i<n;i++){
         for(int j=i+1;j < n;j++){
	        if(arr[i]>arr[j]){
		    char temp = arr[i];
		    arr[i]=arr[j];
		    arr[j]=temp;
		}

	 }

   }
}
void *check_desc(int *arr,int n){
    for(int i=0;i<n;i++){
         for(int j=i+1;j < n;j++){
                if(arr[i]<arr[j]){
                    char temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }

         }

   }
}

int main(){
   int arr[]={5,4,3,2,1,6,7,8,9,10};
   int n=sizeof(arr)/sizeof(arr[0]);
   int m=n/2;
   check_asc(arr,m);
   check_desc(arr+m,n/2);
   for(int i=0;i<n;i++){
           printf("%d ",arr[i]);
   }

}
