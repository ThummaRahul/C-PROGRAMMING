#include <stdio.h>
struct student{
    int i;
    char c;
};
void pf(struct student p){
    printf("%d %c\n",p.i,p.c);
}
int main()
{
    struct student cs={1,'A'};
    struct student cs1={1,'B'};
    pf(cs);
    pf(cs1);
}
