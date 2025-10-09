#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *p=NULL;
    p=(int *)malloc(2*sizeof(int));
    int i,j;
    printf("enter n elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("overall output elements\n");
    for(j=0;j<n;j++){
        printf("%d ",p[j]);
    }
    free(p); //Frees dynamically allocated memory
}
