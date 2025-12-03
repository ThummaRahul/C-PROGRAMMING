#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
int cnt=0;
void *input(char (*p)[20])
{
	p=realloc(p,(cnt+1)*sizeof(*p));
	printf("enter name (max 19 characters):\n");
	__fpurge(stdin);
	fgets(p[cnt],20,stdin);
	cnt++;
	return p;
}
void print(char (*p)[20]){
	int i;
	for(i=0;i<cnt;i++)
	      printf("name ID: v25he20%d name:%s",i,p[i]);

}
void *edit(char (*p)[20])
{
      int i;
   if(cnt==0){printf("no records\n");return NULL;}

   printf("enter edit you want:");
   scanf("%d",&i);
   printf("enter the new name\n");
   __fpurge(stdin);
   gets(p[i]);
   //realloc(p,--cnt * sizeof(*p));

  //f(cnt==0)   p=NULL;

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
/*
void *find(char (*p)[20]){
       int i,j;
        char str[20];
	fgets(str,20,stdin);
	str[strlen(str)-1]='\0';
        for(i=0;i<cnt;i++){

        if(strcmp(str[j],p[j])==0){
			   printf("name found\n");
	}else{
	    printf("not found\n");
	}	
   }
 }
}*/
void find(char (*p)[20], int cnt) {
    char str[20];
    printf("Enter name to search: ");
    gets(str);
    //fgets(str, sizeof(str), stdin);
    // Remove newline character safely
    //size_t len = strlen(str);
    __fpurge(stdin);
    int len =strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (int i = 0; i < cnt; i++) {
        if (strcmp(str, p[i]) == 0) {
            printf("Name found\n");
            return;
        }
    }
    printf("Name not found\n");
}

void *delete(char (*p)[20]){
	int i;
   if(cnt==0){printf("no records\n");return NULL;}

   printf("enter index to delete:");
   scanf("%d",&i);
   memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
   p=realloc(p,--cnt * sizeof(*p));

   if(cnt==0)   p=NULL;

  return p;


}
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
                    case 'f':find(name,cnt);break;
                    case 'd':name=delete(name);break;
                    default:printf("Invalid entry");
       }
   }
}

