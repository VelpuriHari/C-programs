#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string :");
	fgets(str,100,stdin);
	int i=0,j=0;
	for(;str[i]!='\n';)
	{
		if(j>=1 && str[j]==' '&& str[j-1]==' ')
		{
			j++;
			continue;
		}

		str[i]=str[j];
		i++;
		j++;
	}
	str[i]='\0';
	printf("%s",str);
}

