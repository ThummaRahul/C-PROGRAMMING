#include<stdio.h>

int my_cmp(const char *s1,const char *s2,size_t n){
        int i=0;
        while(i<n)
        {
                if( s1[i] != s2[i])
                {
                        return s1[i]-s2[i];
                }
                if(s1[i] == '\0'||s2[i]=='\0')
                {
                        break;
                }
                i++;
        }
        return 0;
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
        char str1[50];    //="hello";
        printf("enter str1:\n");
        fgets(str1,sizeof(str1),stdin);
        remove_newline(str1);

        char str2[50];  //="hello";
        printf("enter str2:\n");


        fgets(str2,sizeof(str2),stdin);
        remove_newline(str2);
        int n;
        printf("enter n:\n"); scanf("%d",&n);

        int r = my_cmp(str1,str2,n);
        if(r==0){
                printf("STRINGS ARE EQUAL\n");
        }else {
                printf("strings are not equal(%d)\n",r);
        }
}

