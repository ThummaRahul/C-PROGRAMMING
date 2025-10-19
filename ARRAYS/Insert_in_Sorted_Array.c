/* Input the value to be inserted : 5
The existing array list is :
2 3 4 7 8
After Insert the list is :
2 3 4 5 7 8 */

#include<stdio.h>
int main()
{
    int arr[]={2, 3, 4 ,7, 8};
    int num,i,j=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[10];
    printf("enter a num\n"); scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]<num){
            temp[j++]=arr[i];
        }
    }
    temp[j++]=num;
    for(i=0;i<n;i++){
        if(arr[i]>num){
            temp[j++]=arr[i];
        }
    }
    for(i=0;i<j;i++){
        printf("%d ",temp[i]);
    }
}
