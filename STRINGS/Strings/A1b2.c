#include<stdio.h>
int main(){
  char s1[]="ABC";
  //char s2[]={'1','2','3'};
  char s2[]="123";
  char s3[10];
  int i,j=0;
  /* for(i=0; s1[i] != '\0' && s2[i];i++){
       s3[j]=s1[i];
       j++;
       s3[j]=s2[i];
       j++;
  */

  i=0;
  while(s1[i] && s2[i]){
       s3[j]=s1[i];
       j++;
       s3[j]=s2[i];
       j++;
       i++;
  }
  s3[j]='\0';
  puts(s3);

}
