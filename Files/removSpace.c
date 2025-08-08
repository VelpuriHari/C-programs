#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fr=fopen("sample.txt","r+");
	int ch;
	while((ch=fgetc(fr))!=(-1))
	{
		if(ch==' ')
		{
		    fputc('\0',fr);
		}
	}
}
