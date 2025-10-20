#include <stdio.h>
struct student{
    int i;
    char c;
};
struct student edit(struct student p){
    (p.i)++;
    p.c = p.c + 5;
    return p;
}
void pf(struct student *p){
    printf("%d %c\n",p->i,p->c);
}
int main()
{
    struct student p1={1,'A'};
    struct student p2={1,'B'};
    p1=edit(p1);
    p2=edit(p2);
    pf(&p1);
    pf(&p2);
}
