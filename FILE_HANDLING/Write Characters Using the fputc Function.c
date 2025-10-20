#include<stdio.h>
int main(){
   
    FILE *fp;
    char data[]="how are you";
    fp=fopen("rahul.txt","w"); 
    if(fp==NULL){
        printf("unabale to open file\n");
    }else{
        
         int index=0;
         char ch ='\0';
         while(data[index]!='\0'){
             ch = fputc(data[index],fp);
             printf("%c",ch);
             index++;
         }
         fclose(fp);
    }
}
