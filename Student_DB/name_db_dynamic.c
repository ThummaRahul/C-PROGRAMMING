#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

int cnt=0;

char *getString()
{
	int i=0;
	char *p=NULL;
	do{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]=0;
	return p;
}
void printMenu(void)
{
	printf("\nMENU\n");
	printf("--------\n");
	printf("i:input\np:print\nq:quit\n");
	printf("f:find\ns:sort\nd:delete\nS:save records\n");
	printf("ENter your choice:");
}
/*void save_records(char **ptr){
   static char **saved = NULL;
   int i;
   if(saved != NULL){
     for(i=0;i<cnt;i++){
        free(saved[i]);
     }
     free(saved);
   }
   saved = (char **)malloc(cnt * sizeof(char*));
   if(saved = NULL) {
          printf("Memory allocation failed for save!\n");
	   return; 
   }
   for(i =0 ;i<cnt;i++){
      saved[i] = (char*)malloc(strlen(ptr[i])+1);
            if(saved = NULL) {
               printf("Memory allocation failed for save!\n");
               return;
            }
         strcpy(saved[i],ptr[i]);
   }
   printf("All records saved successfully\n");
}*/ //not needed this time after file handling we require to save file at that moment...
void *input(char **ptr)
{//whenever called, add a new name to the existing records.
//the length of name has no limit, Can input length of any size.
	ptr=realloc(ptr,(cnt+1)*sizeof(*ptr));	
	printf("Enter name(length of any size):");
        __fpurge(stdin);
	ptr[cnt]=getString();
	cnt++;
	return ptr;
}
void print(char **ptr)
{
	int i;
	for(i=0;i<cnt;i++)
		printf("name-%d:%s\n",i,ptr[i]);
}
void find(char **p){
     char str[20];
     int found = 0;
     printf("enter name you want to search\n");
     __fpurge(stdin);
     gets(str);
     for(int i=0;i<cnt;i++){
        if(strcmp(p[i],str)==0){
	   printf("is found\n");
	   found =1;
	   break;
	}
     }
     if(found ==0){
        printf("not found\n");
     }
}
void *delete(char **p)
{
///user-specified  record to be deleted
   int i;
   if(cnt==0){printf("no records\n");return NULL;}

   printf("enter index to delete:");
   scanf("%d",&i);
   free(p[i]);
   memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
   p=realloc(p,--cnt * sizeof(*p));

   if(cnt==0)   p=NULL;

  return p;

}
void sort(char **p)
{
	int i,j;
	char *temp;
	for(i=cnt-1;i>0;i--)
		for(j=0;j<i;j++)
			if(strcmp(p[j],p[j+1])>0)
			{
			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;
			}

return;
}

int main()
{
	char **names=NULL;
	char choice;
	while(1)
	{
		printMenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i':names=input(names); break;
			case 'd':names=delete(names);break;
			case 's':sort(names);break;
			case 'q':return 0;
			case 'f':find(names);break;	 
			case 'p':print(names);break;
		       // case 'S':save_records(names);break;		 
			default: printf("Error:invalid entry\n");
		}//switch
	}
}
