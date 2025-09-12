#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	printf("Enter the string:");
	scanf("%s",str);
	for(int i=0;i<strlen(str);i++)
	{
		str[i]=toupper(str[i]);
	}
	printf("\n%s",str);

}
