#include<stdio.h>
int main(){
   
    FILE *fp;
    char name[25];
    int age;
    printf("Enter your name & age\n");
    scanf("%s%d",name,&age);
    
    fp=fopen("rahul.txt","w"); 
    if(fp==NULL){
        printf("unabale to open file\n");
    }else{
         
         fprintf(fp,"%s %d\n",name,age);
         printf("data written successfully!\n");
         fclose(fp);
    }
}
