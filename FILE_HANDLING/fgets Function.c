#include<stdio.h>
int main(){
   
    FILE *fp;
    char data[15];
    
    //fgets(variable _to_store , length,file_pointer)
    
    fp=fopen("rahul.txt","r"); 
    
    if(fp==NULL){
        printf("unabale to open file\n");
    }else{
        
        while(!feof(fp)) 
        {
            fgets(data,15,fp);
            printf(" The character reached were %s",data); //more than 15 characters then you observe
        }
        fclose(fp);
    }
}
