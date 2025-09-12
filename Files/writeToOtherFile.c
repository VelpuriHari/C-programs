#include<stdio.h>
int main()
{
	FILE *fp1=fopen("sample.txt","r");
	FILE *fp2=fopen("sample2.txt","w");
	if(fp1==NULL || fp2==NULL)
	{
		printf("Error in Opening in files");
		return 0;
	}
	char c;
	while((c=getc(fp1))!=EOF)
	{
		putc(c,fp2);
	}
	printf("Completed");
}
