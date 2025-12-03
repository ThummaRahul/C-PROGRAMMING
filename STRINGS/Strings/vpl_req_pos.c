#include<stdio.h>
#include<string.h>
int my_strlen(char *str){
	int len=0;
	while(str[len]!='\0'){
	  len++;
	}
	return len;
}
void my_strcpy(char *dest, const char *src){
      int i=0;
      while(src[i]!='\0'){
         dest[i]=src[i];
	 i++;
      }
      dest[i]='\0';
}


int main()
{
	char s1[20],s2[20],temp[20];
	int pos;
	printf("enter s1 string\n");
	gets(s1);//abcdefg
	printf("enter s2\n");
	gets(s2);//kripa
	printf("enter the pos\n");
	scanf("%d",&pos);//1
	//strcpy(dest,source);
	my_strcpy(temp,s1+pos);
	//puts(temp);//bcdefg
	//puts(s1+pos);
	my_strcpy(s1+pos,s2);


	//puts(s1);
	my_strcpy(s1+my_strlen(s1),temp);
	puts(s1);//akripabcdefg
}

