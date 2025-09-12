#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	printf("Enter the string :");
	fgets(str,100,stdin);
	int i=0,j=0;
	while(j<strlen(str))
	{
		if(isalpha(str[j]))
		{
		   str[i]=str[j];
		   i++;
		   j++;
		   continue;
		 }
		 j++;
	}
	str[i]='\0';
	printf("%s",str);

}
		  
	
