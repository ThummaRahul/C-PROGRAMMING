#include<stdio.h>
#include<ctype.h>
int main(){
   char str[20]="KriPA";
   puts(str);
   printf("\n");
   for(int i=0;str[i]!='\0';i++){
     if(isalpha(str[i])){
        str[i] ^=32;
     }
   }
    puts(str);
//printf("");
}
