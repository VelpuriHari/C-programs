#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	printf("Entre the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	for(int i=0;str[i];i++)
	{
	char	 key=str[i];
		int j=i-1;
		while(j>=0 && tolower(str[j])>tolower(key))
		{
			str[j+1]=str[j];
			j--;
		}
		str[j+1]=key;
	}
	printf("%s",str);
}
