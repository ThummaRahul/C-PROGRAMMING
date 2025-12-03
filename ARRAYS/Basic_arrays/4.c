#include<stdio.h>
int main(){
    int n = 3;
    int cnt =0;
    for(int i=1;i<=n;i++){
          if(n%i==0)
               cnt++;
    }
    if(cnt==2){
         printf("prime");
    }
    else {
        printf("not prime");
    }


}
