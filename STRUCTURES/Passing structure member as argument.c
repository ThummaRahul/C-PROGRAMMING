#include <stdio.h>
struct student{
    int i;
    char c;
};
void keyvalue(int* i,char* c){
    scanf("%d %c",i,c);
}
int main()
{
    struct student cs;
    keyvalue(&cs.i,&cs.c);
    printf("%d %c",cs.i,cs.c);
}
