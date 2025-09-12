#include<stdio.h>
int main()
{
	FILE *fp=fopen("sample.txt","r");
	char c,count=0;
	while((c=getc(fp))!=EOF)
	{
		if(c==' '||c=='\n')
		{
			count++;
		}
	}
	printf("Number of words:%d",count);
}
