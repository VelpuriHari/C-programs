#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter the string :");
	scanf(" %[^\n]",str);
	char *token=strtok(str," .,");
	while(token!=NULL)
	{
		printf("%s\n ",token);
		token=strtok(NULL," .,");
	}
}
