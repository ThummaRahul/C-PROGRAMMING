
#include <stdio.h>
void sort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
              int temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;    
            }
        }
    }
    
}
int check_freq(int arr[],int n,int x){
    int i,count=0;
    for(i=0;i<n;i++){
        if(x==arr[i])
            count++;
        if(arr[i]>x)
            break;
        
    }
    return count;
    
}
int main()
{
    int n;
    int arr[20]; 
    printf("enter the no of element you want:\n");
    scanf("%d",&n);
    printf("please enter the %d element you want:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int x,count=0;
    printf("enter the element in above array - you want to search and count the occurance\n");
    scanf("%d",&x);
    sort(arr,n);
    printf("Given that array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("your searched num is: %d that num count : %d\n",x,check_freq(arr,n,x));
}
