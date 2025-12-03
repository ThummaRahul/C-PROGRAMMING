#include<stdio.h>
#include<string.h>
int is_vowel(char str){
	if(str=='a'|| str=='e'||str=='i'|| str=='o'|| str=='u'||str=='A'||str=='E'|| str=='I'||str=='O'||str=='U'){

		return 1;

	} else{
		return 0;
	}
}
int check_repeat(char *str,int n){
    int cnt,i,j;
    for(i=0;i<n;i++)
    {
	    cnt=0; 
	    for(j=0;j<n;j++)
	    {
		    if(i>j && str[i]==str[j]){
		         cnt++;
		    }
	    }
	    if(cnt==1){
	      return 1;
	    }
    
    }
    return 0; 

}
int main()
{
	char str[20]; //"aeroplane";
	printf("Enter string\n"); 
	fgets(str,sizeof(str),stdin);
	str[strlen(str)-1]='\0';
        int n=strlen(str);
	for(int i=0;str[i]!='\0';i++){
		if(check_repeat(str,n)){
			if(is_vowel(str[i])==1){
				printf("%c",str[i]);
			}
		}
	}

}

