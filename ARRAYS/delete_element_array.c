/* Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
*/
#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5};
    int x,p,i,j=0;
    int n=sizeof(arr1)/sizeof(arr1[0]);
   
    printf("enter a delete element\n"); scanf("%d",&p);
     printf("The current list of the array :\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    // Move all data to the left side of the array to make space
    for(i=p-1;i<n;i++){
       arr1[i]=arr1[i+1];
        
    }

    printf("\n\nAfter delete the element the new list is :\n");
    for (i = 0; i <n-1; i++)
        printf("%d ", arr1[i]);
    printf("\n\n");
}
