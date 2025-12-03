#include<stdio.h>
#include<string.h>
char *my_strstr(const char *str, const char *sub){
   int i,j,start;
   for(int i=0;str[i]!='\0';i++){
           start = i;
	   j=0;
	   while( str[i]==sub[j] && sub[j]!='\0'){
		   i++;
		   j++;
	   }
	   if(sub[j]=='\0'){
	       return sub;     //(char *)&str[start];
	   }
           i = start;
    }
   return NULL;

}

int main(){
     char str[30]="i love coding";
     char sub[20]="love";

     char *p;
     p=my_strstr(str,sub);
     if(p){
	     printf("is found%s",sub);
     }else{
       printf("not found");
     }

}
