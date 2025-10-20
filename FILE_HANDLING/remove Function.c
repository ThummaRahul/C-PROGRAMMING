#include<stdio.h>
int main(){
   
    int status = remove("priya.txt");
    printf("%d\n",status);
    if(status==0){
        puts("file deleted\n");
    }else{
        puts("error while deleting the file\n");
    }

}
