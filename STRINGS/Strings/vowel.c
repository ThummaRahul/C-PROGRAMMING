#include<stdio.h>
#include<string.h>
int is_vowel(char str){
   if(str=='a'|| str=='e'||str=='i'|| str=='o'|| str=='u'||str=='A'||str=='E'|| str=='I'||str=='O'||str=='U'){
      
	   return 1;
   
   } else{
      return 0;
   }
}

int main(){
  char str[20]; //"aeroplane";
  fgets(str,sizeof(str),stdin);
  str[strlen(str)-1]='\0';
  
  for(int i=0;str[i]!='\0';i++){
     if(is_vowel(str[i])==1){
          printf("%c",str[i]);
     }
  }

}
