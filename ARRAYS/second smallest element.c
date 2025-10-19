/*
Write a program in C to find the second smallest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
arr[]={ 2,9,1,4,6 }
Expected Output :
The Second smallest element in the array is : 2
*/
#include<stdio.h>
int sec(int *arr,int n){
    int low,sec_low;
    if (arr[0] < arr[1]) {
        low = arr[0];
        sec_low = arr[1];
    } else {
        low = arr[1];
        sec_low = arr[0];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<low){
            sec_low=low;
            low = arr[i];
        }if(arr[i] < low && sec_low > low)
        {
            sec_low=arr[i];
        }
    }
    return sec_low;
    
}
int main()
{
    int arr1[]={ 2,9,1,4,6 };
    int x,p,i,j=0;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int r= sec(arr1,n);
    printf("%d ",r);
}
