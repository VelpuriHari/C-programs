#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("Entre the string 1:");
	fgets(str1,100,stdin);
	char *temp="Enter the string 2:";
	fputs(temp,stdout);
	fgets(str2,100,stdin);
	str2[strcspn(str2,"\n")]='\0';
	int i=0;
	while(i<strlen(str1) && i<strlen(str2))
	{
		str1[i]=str2[i];
		i++;
	}
	printf("String :%s",str1);
}

