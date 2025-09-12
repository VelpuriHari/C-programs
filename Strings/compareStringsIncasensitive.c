#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	fputs("Enter the String :",stdout);
	fgets(str,100,stdin);
	char str2[100];
	fputs("Enter the string :",stdout);
	fgets(str2,100,stdin);
	size_t len=strlen(str);
	if(strlen(str)!=strlen(str2))
		fputs("NOT Equal",stdout);
	else
	{
		int i=0;
		 for(;str[i];i++)
		 {
//			str[i]=tolower(str[i]);
//			str2[i]=tolower(str2[i]);
			if(tolower(str[i])!=tolower(str2[i]))
			{
				printf("Not Equal");
				break;
			}
		 }
		 if(i==len)
		 {
			 printf("Equal");
		 }
	}
}

