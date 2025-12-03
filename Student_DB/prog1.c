#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
int cnt=0;
void *input(char (*p)[20])
{
	p=realloc(p,(cnt+1)*sizeof(*p));
	printf("enter name (max 19 characters):\n");
	//scanf("%s",p[cnt]);
	__fpurge(stdin);
 	fgets(p[cnt],20,stdin);//kripa mam here//c here new line will be there
	p[cnt][strlen(p[cnt])-1]='\0';
	// if using fgets ,remove the newline
	//
	//gets(p[cnt]);
	cnt++;
	return p;
}
int print(char (*p)[20]){
	int i;
	    
	if(cnt==0)
	{
		printf("no records\n");
		return 0;
	}

	for(i=0;i<cnt;i++)
		printf("name ID: v25he20%d name:%s\n",i,p[i]);

}
void *edit(char (*p)[20])
{
	int i;
	if(cnt==0){printf("no records\n");return NULL;}

	printf("enter edit you want:");
	scanf("%d",&i);
	printf("enter the new name\n");
	__fpurge(stdin);
	//gets(p[i]);
	fgets(p[cnt],20,stdin);//kripa mam here//c here new line will be there
        p[cnt][strlen(p[cnt])-1]='\0';

	return p;

}
void sort(char (*p)[20])
{
	int i,j;
	char temp[20];
	for(i=cnt-1;i>0;i--){
		for(j=0;j<i;j++){
			if(strcmp(p[j],p[j+1])>0)
			{
				strcpy(temp,p[j]);
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],temp);
			}
		}
	}

	return;
}
void find(char (*arr)[20])
{
	char searchName[20];
	int found = 0;

	printf("Enter name to search:\n");
	__fpurge(stdin);
//	fgets(searchName, sizeof(searchName), stdin);
//	searchName[strlen(searchName)-1]='\0';
	//gets(searchName);

	for (int i = 0; i < cnt; i++) 
	{
		if ((strcmp(arr[i], searchName)) == 0) 
		{
			printf("name found\n");
			found = 1;
			break;
		}
	}
	if(found ==0 )
	{
		printf("Not found\n");
	}
}
/*void find(char (*p)[20]) {
  char str[20];
  int is_found = 0;

  printf("Enter name to search: ");
  __fpurge(stdin);         // If you're on Linux (glibc). On Windows use fflush(stdin).
  fgets(str,20,stdin);               // ⚠️ gets() is unsafe. Use fgets() in real applications.
  str[strlen(str)-1]='\0';

  for (int i = 0; i < cnt; i++) 
  {
  int j = 0;
  int is_same = 1;

// Compare character by character
while (str[j] != '\0' || p[i][j] != '\0') {
printf("str=%c\n",str[j]);
printf("p=%c\n",p[i][j]);
if (str[j] == p[i][j]) {
is_same = 1;
}
j++;
}

if (is_same==0) {
printf("Name not found\n");
is_found = 1;
break; // Uncomment if you only want the first match
}else{
printf("name found\n");
}
}
}*/
/*
   void *find(char (*p)[20]){
   int i,j;
   char str[20];
   fgets(str,20,stdin);
   str[strlen(str)-1]='\0';
   for(i=0;i<cnt;i++){
   for(j=0;j<i;j++){

   if(strcmp(str[j],p[j])==0){
   printf("name found\n");
   }else{
   printf("not found\n");
   }	
   }
   }
   }*/
/*void find(char (*p)[20]) {
  char str[20];
  int is_found = 0;
  printf("Enter name to search: ");
  __fpurge(stdin);
//fgets(str, sizeof(str), stdin);
gets(str);

int i;
for (i = 0; i < cnt; i++) 
{
if ((strcmp(p[i],str)) == 0)
{
printf("Name found\n");
is_found =1;
//break;
}
}
if(is_found==0){
printf("name not found\n");
}  
}
*/
/*#define MAX_NAMES 100
#define NAME_LEN 20


void find(char names[][NAME_LEN]) {
char str[NAME_LEN];
int is_found = 0;

printf("Enter name to search: ");

// clear input buffer (portable way)
int c;
while ((c = getchar()) != '\n' && c != EOF); // flush stdin

fgets(str, sizeof(str), stdin);

// Remove newline character if present
size_t len = strlen(str);
if (len > 0 && str[len - 1] == '\n') {
str[len - 1] = '\0';
}

for (int i = 0; i < cnt; i++) {
if (strcmp(names[i], str) == 0) {
printf("Name found\n");
is_found = 1;
break;
}
}

if (!is_found) {
printf("Name not found\n");
}
}
*/
void  *delete(char (*p)[20]){
	int i;
	if(cnt==0) { printf("no record\n"); return NULL;}
	printf("enter the index you want to delete\n");
	//__fpurge(stdin);
	scanf("%d",&i);
	memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
	//scanf("%d",&n);
	p=realloc(p,--cnt*sizeof(*p));// or **  --cnt befor this line  **

}

/*
   void *delete(char (*p)[20]){
   int i;
   if(cnt==0){printf("no records\n");return NULL;}

   printf("enter index to delete:");
   scanf("%d",&i);
   memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
   p=realloc(p,--cnt * sizeof(*p));

   if(cnt==0)   p=NULL;

   return p;


   }*/
void printmenu(void){
	printf("\nMENU\n");
	printf("-----------------------\n");
	printf("i-enter a name:\nq-quit:\np=print elements:\n");
	printf("d-delete element:\ns-sort:\nf-find element:\ne-edit:\n");
}
int main(){
	char (*name)[20]=NULL; //[name*]  ela [] evvadhhu () ela evvali...
	char choice;
	while(1){
		printmenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice){
			case 'i':name=input(name);break;
			case 'q':return 0;
			case 'p':print(name);break;
			case 'e':name=edit(name);break;
			case 's':sort(name);break;
			case 'f':find(name);break;
			case 'd':name=delete(name);break;
			default:printf("Invalid entry");
		}
	}
}

