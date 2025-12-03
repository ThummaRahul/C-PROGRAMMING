#include<stdio.h>

void rem(char *str){
	int i=0;
	while(str[i] != '\0'){
		if(str[i] == '\n'){
			str[i] = '\0';
		}

		i++;
	}

}
int len(char *str){
	int l=0;
	while(str[l] != '\0'){
		l++;
	}
	return l;
}

void rev(char *str){
	int i=0;
	while(str[i]){	
		if( str[i] >= 'A' && str[i] <= 'Z'|| str[i] >= 'a' && str[i] <= 'z'){   
			str[i] ^= 32;
		
		}
		i++;
		

	}
}
int main(){
	int n=10;
	char s[n];
	printf("enter string:\n");
	fgets(s,sizeof(s),stdin);
	//s[strlen(s)-1]='\0';
	//printf("lenghth of \n");
	rem(s);
	if(s[0]==32){
	   printf("ERROR");
	   return 0;
	}
	//printf("lengh of string %d\n",len(s));
	rev(s);
	puts(s);
}
