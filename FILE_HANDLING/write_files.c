#include<stdio.h>
int main(){
   
    FILE *fp;
    char input[50];
    fp=fopen("rahul.txt","w"); 
    if(fp==NULL){
        printf("unabale to open file\n");
    }else{
         printf("enter  a string\n");
         fgets(input,50,stdin);
         
         fputs(input, fp);
         printf("data saved succesfull\n");
         fclose(fp);
    }
}
