#include<stdio.h>

int my_copy(char *dest,const char *src,size_t n){
        size_t i=0;
        while(i<n && src[i] !='\0'){
              dest[i] = src[i];
	      i++;
	}
        while(i<n){
	    dest[i]='\0';
	    i++;
	}
        return *dest;
}
void remove_newline(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main(){
        char str[50],des[50]; 
        printf("enter str:\n");
        fgets(str,sizeof(str),stdin);
        remove_newline(str);
        //printf("BEFORE LOOP main str:\n");
	//puts(str);
	int n;
	printf("PLZ Enter upto N-th positions copies YOU WANT:\n");
	scanf("%d",&n);
	my_copy(des,str,n);
        str[n]='\0';
        //printf("%s ",des); 
	//printf("AFTER main str:\n");
	//puts(str);
	printf("Destination str:\n");
	//puts(des);
	printf("%s\n",des);
}

