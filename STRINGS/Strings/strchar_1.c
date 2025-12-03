#include<stdio.h>
#include<string.h>
int main(){
     char str[20]="embedded";

     char ch='b';

     char *p;
     p=strchr(str,ch);
     if(p){
        printf("found at %ld\n",p-str);
     }else {
       printf("Not found\n");
     }
	     

}
