#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="malayalam";
    int left,right,len,flag=1;
    len = strlen(str);
    for(left=0,right=len-1;left < right;left++,right--){
	    if(str[left] != str[right]){
	          flag =0 ;
		  break;
	    }
    }
    if(flag){
       printf("is pali\n");
    }else{
      printf("not pali\n");
    }
}
