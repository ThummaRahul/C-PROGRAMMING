#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
//#define MAX  10
int cnt=0;
const int MAX=3;
void printMenu(void)
{
	printf("\nMENU\n");
	printf("--------\n");
	printf("i:input\np:print\nq:quit\n");
	printf("f:find\ns:sort\nd:delete\n");
	printf("ENter your choice:");
}
void input(char (*ptr)[20])
{//whenever called, add a new name to the existing records.
	if(cnt == MAX)
	{
		printf("not enough memory\n"); 
		return;
	}	
	printf("Enter name:");
        __fpurge(stdin);
	gets(ptr[cnt]);
	cnt++;
}
void print(char (*ptr)[20])
{
	int i;
	if(cnt==0) printf("NO RECORDS\n");
	for(i=0;i<cnt;i++)
		printf("name-%d:%s\n",i,ptr[i]);
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
        char str[20];
        int found = 0;
        printf("enter a input\n");
	__fpurge(stdin);
	fgets(str,20,stdin);
	str[strlen(str)-1]='\0';
        for(int i=0;i<cnt;i++){
	   if((strcmp(arr[i],str))==0)
	   {
	        found=1;
		printf("is found\n");
		break;
	   }
        }
	if(found == 0){
	   printf("not found\n");
	}
}
/*#define MAX_LEN 100
void delete_string(char (*P)[20]) {
    if (*cnt == 0) {
        printf("No records\n");
        return;
    }

    char str[MAX_LEN];
    printf("Enter string to delete: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return;
    }

    // Remove trailing newline from fgets
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < *cnt; i++) {
        if (strcmp(str, p[i]) == 0) {
            free(p[i]); // free the memory for the deleted string
            // Shift the rest
            for (int j = i; j < *cnt - 1; j++) {
                p[j] = p[j + 1];
            }
            (*cnt)--;
            i--; // Check the same index again as it now has new content
        }
    }
}*/

void *delete(char (*p)[20]){
//   int i;
      if(cnt==0){
           printf("no records\n");
           return NULL;
   }
   char str[20];
   printf("enter string to delete:");
   __fpurge(stdin);
   gets(str);
   //scanf("%d",&i);
   for(int i=0;i<cnt;i++)
   {
      if((strcmp(str,p[i])==0))
       {
          
          memmove(p+1,p+i+1,(cnt-1-i)*sizeof(*p));
	  printf("successfully deleted\n");
          i--;
          cnt--;
	}else{
	   printf("no string found\n");
	   return NULL;
	}
   }
   
   if(cnt==0)   p=NULL;
   return p;
}

int main()
{
	char names[10][20];
	char choice;
	while(1)
	{
		printMenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i':input(names); break;
			case 'd':delete(names);break;
			case 'q':return 0;
			case 'p':print(names);break;
		        case 'f':find(names);break;
		        case 's':sort(names);break;		 
			default: printf("Error:invalid entry\n");
		}//switch
	}
}
