#include <stdio.h>
#include <stdlib.h>
struct student{
    int i;
    char c;
};
struct student *fun(int a,int b){
    struct student *ptr=(struct student*)malloc(sizeof(struct student));
    ptr-> i=a;
    ptr-> c=b+5;
    return ptr;
}
void pf(struct student *p){
    printf("%d %c\n",p->i,p->c);
}
int main()
{
    struct student *p1;
    struct student *p2;
    p1=fun(2,'A');
    p2=fun(3,'B');
    pf(p1);
    pf(p2);
    free(p1);
    free(p2);
}
