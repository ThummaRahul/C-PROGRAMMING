#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p=NULL;
    p=(int *)malloc(2*sizeof(int));
    int i,j;
    printf("enter 2 elements\n");
    for(i=0;i<2;i++){
        scanf("%d",&p[i]);
    }
    p=(int *)realloc(p,5*sizeof(int));
    printf("again enter 3 elements\n");
    for(i=2;i<5;i++){
        scanf("%d",&p[i]);
    }
    printf("overall output elements\n");
    for(j=0;j<5;j++){
        printf("%d ",p[j]);
    }
    free(p);
}
