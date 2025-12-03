#include <stdio.h>
#include<string.h>
#include<ctype.h>
void reverse(char *sub)
{
    int i=0;
    while(sub[i])
    {
        if(isalpha(sub[i]))
        sub[i]=sub[i]^32;
        i++;
    }
   // sub[i]='\0';
}
int main() {
    char s1[20];
    printf("enter string\n");
    fgets(s1,sizeof(s1),stdin);

    char s2[20] ;
    fgets(s2,sizeof(s2),stdin);
    s2[strlen(s2)-1]='\0';

   
    char *p = strstr(s1,s2);
    reverse(s2);
    if (p != NULL) {
        
        printf("Found at: %s\n",s2);
    } else {
        printf("NOT Found\n");
    }

    return 0;
}

