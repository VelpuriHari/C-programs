#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string :");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]=' ';
//	int last=strcspn(str,"\n");

//	char *token=strtok(str," ");
	char result[100]="";
	int  len=strlen(str)-2;
	char *ptr;
	while(len>=0)
	{
		if(str[len-1]==' '||len==0)
		{
			ptr=&(str[len]);
			strcat(result,ptr);
			str[len]='\0';
			len-=1;
		}
		len-=1;
	}
	printf("%s.",result);
	str[strlen(result)-2]='\0';

	printf("\n%s.",result);
}

