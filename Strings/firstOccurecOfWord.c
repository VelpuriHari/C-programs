#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	char word[100];
	printf("Enter the word:");
	scanf("%s",word);
	char *token=strtok(str," ");
	while(token!=NULL)
	{
		if(strcmp(token,word))
		{
			printf("%sFound at %ld",token,token-str);
			break;
		}
		token=strtok(NULL," ");
	}
}







