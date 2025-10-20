#include<stdio.h>
int main(){
    if(rename("rahul.txt","priya.txt")==0){
        printf("file renamed successfully\n");
    }else{
        printf("error while renaming the file");
    }
}
