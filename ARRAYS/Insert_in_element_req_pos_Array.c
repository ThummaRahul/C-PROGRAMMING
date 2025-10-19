/* Input the value to be inserted : 5
Input the index Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 8 5 7 10
*/
#include<stdio.h>
int main()
{
    int arr[]={1,8,7,10};
    int num,pos,i,j=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[10];
    printf("enter a num\n"); scanf("%d",&num);
    printf("enter a pos index\n"); scanf("%d",&pos);
    for(i=0;i<pos;i++){
            temp[j++]=arr[i];
    }
    temp[pos]=num;
    j++;
    for(i=pos;i<n;i++){
            temp[j++]=arr[i];
    }
    for(i=0;i<j;i++){
        printf("%d ",temp[i]);
    }
}
