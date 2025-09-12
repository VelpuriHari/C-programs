#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
	int small=INT_MAX,large=INT_MIN;
//	int fd=open("sample.txt","r");
	char buffer[100];
//	read(fd,buffer,100);
	char *str="the yocto project is an open source collaborative effort";
	FILE *fp;
	fp=fopen("sample.txt","r");
	int i=0,j=0;
	int smalli=0,smallj=0,largei=0,largej=0;
	char c;
	//while(j<strlen(str))
		while((c=fgetc(fp))!=EOF)
	{
	//	printf("%c",fgetc(fp));
		if(c==' ')
		{
			if(small>(j-i))
			{
				smalli=i;
				smallj=j;
				small=j-i;
			}
			if(large<(j-i))
			{
				largei=i;
				largej=j;
				large=j-i;
			}
			j++;
			i=j;
		}
		else{
			j++;
		}
	}
	//printf("%d %d",small,large);
	while(smalli<=smallj)
	{
		printf("%c",str[smalli]);
		smalli++;
	}
	while(largei<=largej)
	{
		printf("%c",str[largei]);
		largei++;
	}
}
