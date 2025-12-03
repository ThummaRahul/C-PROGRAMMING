/* wap to move all the vowels at the beginning
 * input: "bcdefghiabc"
 * o/p: "eiabcdfghbc"                   */

#include<stdio.h>
#include<string.h>
int is_vowel(char ch){
   ch = (ch >='A' && ch <='Z')?ch+32:ch;
   return (ch =='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
int main(){
  char str[50]="vector",temp;
  int j=0;
  for(int i=0;str[i]!='\0';i++){
      if(is_vowel(str[i])){    
	    temp = str[i];
	    str[i] = str[j];
	    str[j] = temp;
	    j++;
      }
  }
  puts(str);
}
