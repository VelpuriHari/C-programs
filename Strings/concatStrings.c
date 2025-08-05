#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("Entre string 1:");
	fgets(str1,100,stdin);
	printf("Entre the string 2:");
	fgets(str2,100,stdin);
	char str[strlen(str1)+strlen(str2)];
	str1[strcspn(str1,"\n")]='\0';
	int i=0;
	while(i<(strlen(str1)+strlen(str2)))
	{
		if(i<strlen(str1))
		{

		str[i]=str1[i];
		//	printf("%c",str[i]);
		}
		else{
			str[i]=str2[i-strlen(str1)];
		//	printf("%c",str[i]);
		}
		i++;
	}
	printf("=>%s",str);
}

