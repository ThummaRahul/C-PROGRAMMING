#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);

      if (a>=b){
	     if (a>=c)
		     printf("a is bigger\n");
	     else 
		     printf("b is bigger\n");
      }
      
      else if (b>=c) {
           printf("b is bigger\n");
      } else 
	      printf("c is bigger\n");

}
