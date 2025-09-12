#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Entre the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	char result[100]="";
	char *re;
	char *token=strtok(str," ");
	while(token!=NULL)
	{
		strcat(token,result);

		printf("\n%s",token);
		token=strtok(NULL," ");
	}
	printf("\n%s",result);
}
