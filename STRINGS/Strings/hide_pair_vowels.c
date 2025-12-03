#include<stdio.h>
#include<string.h>
int is_vowel(char ch){
	
    ch = (ch >= 'A' && ch <='Z')?ch+32:ch;
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

int main(){
    
    char str[20]; //="india";  
    printf("enter string\n");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';// india  == ind**
    int j=0;
    char res[100];
    for(int i=0;str[i] != '\0';i++){
	    if(is_vowel(str[i]) && is_vowel(str[i+1]))
	    {
	       res[j++] = '*';
	       res[j++] = '*';
	       i++;
	    }else{
	       res[j++] = str[i];
	    }

    
    }
    res[j]='\0';
   puts(res);
}   






   
    

