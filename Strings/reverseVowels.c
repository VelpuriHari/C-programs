#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	puts("Enter the string:");
	scanf("%[^\n]",str);
//	for(int i=0,j=strlen(str);i<j;i++,j--);
	int i=0,j=strlen(str)-1;
	while(i<j)
	{
		if((str[i]=='a' || str[i]=='e'||  str[i]=='i'||str[i]=='o'||str[i]=='u') && (str[j]=='a' || str[j]=='e'||  str[j]=='i'||str[j]=='o'||str[j]=='u'))
				{
					str[i]=str[i]^str[j];
					str[j]=str[i]^str[j];
					str[i]=str[i]^str[j];
					i++;
					j--;
				}
		 if(str[i]!='a' && str[i]!='e'&&  str[i]!='i'&& str[i]!='o'&& str[i]!='u')
			i++;
		 if(str[j]!='a' && str[j]!='e' &&  str[j]!='i'&& str[j]!='o'&& str[j]!='u')
			j--;
	}
	printf("\n%s",str);
}
