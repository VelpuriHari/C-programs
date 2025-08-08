#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Entre the string :");
	fgets(str,100,stdin);
	char *token=strtok(str," ,.");
	char *small=token,*large=token;
	
	while(token!=NULL)
	{
		if(strlen(small)>strlen(token))
		{
			small=token;
		}
		if(strlen(large)<strlen(token))
		{
			large=token;
		}
		token=strtok(NULL," .,");
	}
	printf(" Small: %s , Large: %s",small,large);
}

