#include<stdio.h>
int main(){
	char s1[]="hello";
	char s2[]="priya";
	char s3[]="babe";
	char s4[100];
	int i=0;
	for(int x=0;s1[x];x++){
		s4[i]=s1[x];
		i++;
	}
	s4[i++]=' ';
	for(int j=0;s2[j];j++){
		s4[i]=s2[j];
		i++;
	}
	s4[i++]=' ';
	for(int k=0;s3[k];k++){
		s4[i]=s3[k];
		i++;
	}
	puts(s4);
}
