#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[100];
	printf("Enter the string :");
	scanf("%s",str);
	for(int i=0;str[i];i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			str[i]=toupper(str[i]);
		}
	}
	printf("%s",str);
}
