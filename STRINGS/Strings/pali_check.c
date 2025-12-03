#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "malayalam";
    int len = strlen(str);
    int flag = 1;

    for (int left = 0, right = len - 1; left < right; left++, right--) {
        if (str[left] != str[right]) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("It's a palindrome\n");
    } else {
        printf("It's not a palindrome\n");
    }

    return 0;
}


/*#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="malayalam";
   char left,right;
    int len = strlen(str)-1;	    
    int flag =1 ;
    for(int left=0,right=len-1;left<right;left++,right--){
         if(str[left] != str[right]){
	       flag= 0;
	       break;
	 }
    }
     if (flag) {
        printf("It's a palindrome\n");
    } else {
        printf("It's not a palindrome\n");
 }}*/
