/*SELF REFRENTIAL STRUCTURES
Definition: Self referential structures are those structures 
in which one or more pointers points to the structure of the same type.
struct self {
int p;
struct self *ptr;
}; */
#include <stdio.h>
#include <stdlib.h>
struct code{
    int i;
    char c;
    struct code *ptr;
};
int main()
{
    struct code var1;
    struct code var2;
    struct code var3;
    var1.i=56;
    var1.c='A';
    var1.ptr=NULL;
    
    var2.i=77;
    var2.c='B';
    var2.ptr=NULL;
    
    var3.i=45;
    var3.c='C';
    var3.ptr=NULL;
    
    
    var3.ptr = &var1;
    var1.ptr = &var2;
    var2.ptr = &var3;
    
    printf("%d %c\n",var3.ptr->i,var3.ptr->c);
    printf("%d %c\n",var1.ptr->i,var1.ptr->c);
    printf("%d %c\n",var2.ptr->i,var2.ptr->c);
    
}

