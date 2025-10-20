#include <stdio.h>
struct student{
    int i;
    char c;
};
void pf(struct student *ptr){
    printf("%d %c\n",ptr->i,ptr->c);
}
int main()
{
    struct student cs1={1,'A'};
    struct student cs2={1,'B'};
    pf(&cs1);
    pf(&cs2);
}
