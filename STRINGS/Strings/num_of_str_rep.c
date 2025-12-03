#include<stdio.h>
#include<string.h>
int main(){
    int cnt=0;
    char str[20]; 
    char ch; 
    printf("enter string\n");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    printf("enter char\n");
    scanf("%c",&ch);

    for(int i=0;str[i] != '\0';i++){

	    if(str[i] == ch){
	       cnt++;
	    }
    
    }
    printf("%c occurence count in %s is = %d\n",ch,str,cnt);

}   
   /* char *p;
    p=strchr(str,ch);
    int =0 ;
    while(p[i]!=NULL){
        cnt++;
	i++;
    }
    printf("Not found\n" 
    printf("count=%d\n",cnt);*/
