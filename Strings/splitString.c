#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string:");
	scanf("%[^\n]",str);
	char *token=strtok(str," ");
	while(token!=NULL)
	{
		printf("\n%s",token);
		token=strtok(NULL," ");
	}
//	printf("=>%s",str);
}
