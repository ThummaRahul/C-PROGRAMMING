#include<stdio.h>
int main(){
   
    FILE *fp;
    char name[25];
    int age;
    fp=fopen("rahul.txt","r"); 
    if(fp==NULL){
        printf("unabale to open file\n");
    }else{
         
         fscanf(fp,"%s%d",name,&age);
         printf("%s %d\n",name,age);
         fclose(fp);
    }
}
