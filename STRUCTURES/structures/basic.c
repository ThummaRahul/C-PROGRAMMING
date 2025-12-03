#include<stdio.h>
#include<string.h>
struct stu{
  int roll;
  char name[30];
  float marks;
}v;
int main(){
	char name[30];
   v.roll=213;
   strcpy(v.name,"rahul");
   v.marks=23.22;
   //strcpy(v.name,name);
   //v.name[30]="rahul";
   printf("%d ",v.roll);
   printf("%s ",v.name);
   printf("%f ",v.marks);
}
