#include<stdio.h>
int main(){
   
    FILE *fp;
    fp=fopen("rahul.txt","r"); 
    if(fp==NULL){
        printf("unabale to open file\n");
    }else{
         
         int ch ='\0';
         while((ch = fgetc(fp))!=EOF)
         {
            printf("%c",ch); 
         }
         
         fclose(fp);
    }
}
