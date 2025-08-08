#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Entre the string :");
	fgets(str,100,stdin);
	int freq[256]={0},count=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(freq[str[i]]==0)
		{
			count++;
			freq[str[i]]=1;
		}
	}
	printf("Maximum Charracters in the string are: %d",count);
}

