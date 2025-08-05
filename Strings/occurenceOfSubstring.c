#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100],str2[100];
	printf("Enter the String:");
	fgets(str,100,stdin);
	printf("SubString :");
	fgets(str2,100,stdin);
	str[strcspn(str,"\n")]='\0';
	str2[strcspn(str2,"\n")]='\0';
	int count=0;
	char *t=strtok(str," \n");
	while(t!=NULL)
	{
		if(!strcmp(t,str2))
		{
			count++;
		}
		t=strtok(NULL," \n");
	}
	printf("\n Occurence of String is : %d",count);
}
	

