#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	 char str[100];
	 printf("Entre the string:");
	 scanf("%s",str);
	 for(int i=0;str[i];i++)
	 {
		 if(islower(str[i]))
		   {
		   	str[i]=toupper(str[i]);
			}
			else{
			str[i]=tolower(str[i]);
			}
			}
	printf("%s",str);
	}
