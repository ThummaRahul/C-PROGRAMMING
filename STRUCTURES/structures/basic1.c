#include<stdio.h>
#include<string.h>
struct stu{
  int roll;
  char name[30];
  float marks;
}v={11,"rahul",97.7};
int main()
{
	printf("%d %s %f\n",v.roll,v.name,v.marks);
}

