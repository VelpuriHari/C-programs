#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
	int freq=1;
	char str[100];
	printf("ENter the string ending with .:");
	scanf("%[^.]",str);
	fputs(str,stdout);
	int seen[256]={0},repeated=INT_MIN,ch=0;
	for(int i=0;i<strlen(str);i++)
	{
		seen[str[i]]++;
		repeated=repeated<seen[str[i]]?(ch=str[i],seen[str[i]]):repeated;
	}
	printf("Repeated char:%c",ch);
}

		
