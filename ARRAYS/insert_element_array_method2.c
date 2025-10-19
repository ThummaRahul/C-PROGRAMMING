/* Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
*/
#include<stdio.h>
int main()
{
    int arr1[]={1,8,7,10};
    int x,p,i,j=0;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    printf("enter a num\n"); scanf("%d",&x);
    printf("enter a pos index\n"); scanf("%d",&p);
     printf("The current list of the array :\n");
    for (i = 0; i < n; i++){
        printf("%d ", arr1[i]);
    }
    // Move all data to the right side of the array to make space
    for(i=n;i>=p;i--){
       arr1[i]=arr1[i-1];
    }
    arr1[p-1]=x;
    printf("\nAfter Insert the element the new list is :\n");
    for (i = 0; i <= n; i++){
        printf("%d ", arr1[i]);
    }
}
