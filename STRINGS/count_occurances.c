#include<string.h>
#include<stdio.h>
int main(){
      char str[30]="embedded";
      char ch='e';
      int cnt=0;
      for(int i=0;str[i]!='\0';i++){
             if(str[i]==ch){
             cnt++;
          }
      }
       printf("the count of given ch %c count is %d\n",ch,cnt);
}
