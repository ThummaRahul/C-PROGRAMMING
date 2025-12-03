#include<stdio.h>
int main()
{
    int data , bit=31;
    printf("enter data");
    scanf("%d",&data);

input: if ((data >> bit) & 1)
              printf("1");
       else 
	       printf("0");
       bit--;
       if(bit>=0)
       goto input;
       printf("\n");

}
