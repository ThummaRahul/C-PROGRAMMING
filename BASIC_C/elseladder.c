#include<stdio.h>
int main(){
       char ch;
       printf("enter a char \n");
       ch = getchar();
       if (ch>=65&&ch<=90)
	       printf("UPPER CASE\n");
       else if (ch>=97&&ch<=122)
	       printf("LOWER CASE\n");
       else if (ch>=48&&ch<57)
               printf("numeric\n"); 
       else
               printf("spl char\n");
}
