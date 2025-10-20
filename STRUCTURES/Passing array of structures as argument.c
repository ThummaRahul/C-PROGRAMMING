#include <stdio.h>
#include <stdlib.h>
struct student{
    int x;
    int y;
};
void pf(struct student *arr){
    int i;
    for(i=0;i<3;i++){
      printf("%d %d\n",arr[i].x,arr[i].y);
    }
}
int main()
{
    struct student arr[3]={{1,2},{3,4},{5,6}};
    pf(arr);
}
