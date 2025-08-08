#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char atr[100];
	printf("Enter the string :");
	fgets(atr,100,stdin);
	int seen[256]={0},i=strlen(atr);
//	int seen[256]={0},i=0;
//	while(i<strlen(atr))
	while(i>=0)
	{
		if(!seen[atr[i]])
		{
			seen[atr[i]]++;
			int j=i+1;
			while(j<strlen(atr))
			{
				atr[j-1]=atr[j];
				j++;
			}
			atr[j-1]='\0';
		//	continue;
		}
		//i++;
		i--;
	}
	printf("%s",atr);
}
