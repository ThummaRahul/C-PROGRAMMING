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
    char *res = str;
	    
    while(*(res+1)!='\0'){
        if(is_vowel(*res) && is_vowel(*(res+1)))
	    {
		    memset(res,'*',2);
		    res += 2;
	    } else{
	       res++;
	    }
    }
    
   puts(str);
}   
/*while (*(res + 1) != '\0') {
        if (is_vowel(*res) && is_vowel(*(res + 1))) {
            memset(res, '*', 2); // Replace both vowels with '*'
            res += 2;            // Move ahead by 2 to avoid overlapping replacement
        } else {
            res++;
        }
    }

    printf("Modified string: %s\n", str); */





   
    

