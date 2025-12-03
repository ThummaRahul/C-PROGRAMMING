#include<stdio.h>
int len(char *s){
	int len=0;
	while(s[len] != '\0'){ 
		len++;
	}
	return len;

}
int main(){
	char s1[]="abcdefgh";
	char s2[]="xyz";
	char s3[20];
	int i=0,j=0,k=0;

	int pos;
	printf("enter pos\n");scanf("%d",&pos);

	while(i < pos){             //pos=4;
		s3[i]=s1[k]; 
		i++;
		k++;
	}
	while(j < len(s2)){          //lengh;
		s3[i]=s2[j];
		i++;
		j++;
	}
	
	
	while(s1[k]){
		s3[i++]=s1[k++];

	}
	s3[i]='\0';
	puts(s3);

}
