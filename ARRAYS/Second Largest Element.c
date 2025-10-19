/* Write a program in C to find the second largest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
arr[]={ 2,9,1,4,6 }
Expected Output :
The Second largest element in the array is : 6
*/
#include<stdio.h>
int sec(int *arr,int n){
    int high=0,sec=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>high){
            sec = high;
            high = arr[i];
        }else if(arr[i]>sec && sec != high)
        {
            sec=arr[i];
        }
    }
    return high;
    
}
int main()
{
    int arr1[]={13,132,33,4,25};
    int x,p,i,j=0;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int r= sec(arr1,n);
    printf("%d ",r);
}
