#include<stdio.h>
#include<string.h>

int main()
{
	char s1[20],s2[20],temp[20];
	int pos;
	printf("enter s1 string\n");
	gets(s1);//abcd
	printf("enter s2\n");
	gets(s2);//xyz
input:
	printf("enter the pos\n");
	scanf("%d",&pos);
	if(pos > strlen(s1) || pos > strlen(s2)){
	   goto input;
	}
	//strcpy(dest,source);
	strcpy(temp,s1+pos);
	//puts(temp);//bcdefg
	//puts(s1+pos);
	strcpy(s1+pos,s2);


	//puts(s1);
	//strcpy(s1+strlen(s1),temp);
	strcat(s1,temp);
	puts(s1);//akripabcdefg
}

