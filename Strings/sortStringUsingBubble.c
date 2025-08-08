#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	fputs("Entre the String:",stdout);
	fgets(str,100,stdin);
	for(int i=0;str[i];i++)
	{
		for(int j=0;str[j];j++)
			if(str[i]<str[j])
			{
				int c=str[i];
				str[i]=str[j];
				str[j]=c;
			}
	}
	printf(" %s",str);
}
