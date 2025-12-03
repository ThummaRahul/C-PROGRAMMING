#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
#define MAX 5
typedef struct Student
{
	int roll;
	char name[20];
	float marks;
}STUDENT;


int cnt=0;
void insert(STUDENT *ptr)
{	
	if(cnt==MAX)
	{
        	printf("DB is full\n");

	}
	else
	{
		printf("enter the roll\n");
		scanf("%d",&ptr[cnt].roll);
                //scanf("%d",&(ptr+cnt)->roll);
		printf("enter the name\n");
		scanf("%s",ptr[cnt].name);
		printf("enter the marks\n");
		scanf("%f",&ptr[cnt].marks);
		cnt++;
	}
}


void print(STUDENT *ptr)
{
	int i;
	if(cnt==0)
	{
		printf("DB is Empty\n");
	}
	else
	{
		for(i=0;i<cnt;i++)
		{
			printf("%d %s %f\n",ptr[i].roll,ptr[i].name,ptr[i].marks);
                       //printf("%d %s %f\n",(p+i)->roll,(p+i)->name,(p+i)->marks);
		}
	}
}
STUDENT * find(STUDENT *ptr)
{
     /*write logic to find a person in the database */



}
void Sort(STUDENT *ptr)
{
  /* write logic for sorting based on roll number*/


}
void Del(STUDENT *ptr)
{
    int i;	
    char str[100];
    printf("enter string\n");
    __fpurge(stdin);
    gets(str);
    for(i=0;i<cnt;i++){
       if(strcmp(ptr[i].name,str)==0){
          memmove(ptr+i,ptr+i+1,(cnt-i-1)*sizeof(*ptr));
          --cnt;
       }
    }
}
	/*delete based on name
	 *void  *delete(char (*p)[20]){
        int i;
        if(cnt==0) { printf("no record\n"); return NULL;}
        printf("enter the index you want to delete\n");
        //__fpurge(stdin);
        scanf("%d",&i);
        memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
        //scanf("%d",&n);
        p=realloc(p,--cnt*sizeof(*p));

        }

	 * */
	/*write
	 * memmove(p + i, p + i + 1, (cnt - i - 1) * sizeof(*p));

🔍 Explanation of the fix

    Your original code had (cnt - 1 - i) — which actually moves one element less than needed.

    The correct count of elements to move is (cnt - i - 1).

Let’s illustrate:

If cnt = 5 and you delete index i = 2,
you want to move elements 3, 4 (i.e., 2 elements) — that’s (5 - 2 - 1) = 2.

Your original (cnt - 1 - i) gives 5 - 1 - 2 = 2 — works here,
but if you delete the last element (i = cnt - 1), then (cnt - 1 - (cnt - 1)) = 0 — okay.
So mathematically both seem fine, but the standard form that’s always correct and clearer is (cnt - i - 1).

So, preferred final version:

memmove(p + i, p + i + 1, (cnt - i - 1) * sizeof(*p));

✅ Summary:

    Use memmove(p + i, p + i + 1, (cnt - i - 1) * sizeof(*p));

    That’s the only fix in the memmove part.

logic */




int main()
{
	STUDENT DB[MAX],*temp=NULL;
	char choice;
	while(1)
	{
		printf("i.insert p.print d.del f.find s.sort e.exit\n");
		printf("enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
		case 'i': insert(DB);
			break;
		case 'p' : print(DB);
			   break;
		case 'e' : exit(0);
		case 'f' : temp=find(DB);
			   break;
		case 's' : Sort(DB);
			   break;
		case 'd' : Del(DB);break;
		}
	}
}


