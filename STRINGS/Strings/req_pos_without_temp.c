#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char s1[20],s2[20];
	int pos;
	printf("enter s1 string\n");
	gets(s1);//abcdefg
	printf("enter s2\n");
	gets(s2);//kripa
input:
	printf("enter the pos\n");
	scanf("%d",&pos);//1
        if(pos > strlen(s1)){
	   
	   printf("invalid position\n");
         	goto input;
	}			
	//scanf("%d",&pos);//1
	for(i=strlen(s1);i>=pos;i--)
	{
		s1[i+ (strlen(s2))] = s1[i];
	}
	strncpy(s1+pos,s2,strlen(s2));
	puts(s1);
}
