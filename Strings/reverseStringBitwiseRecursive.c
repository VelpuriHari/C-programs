#include<stdio.h>
#include<string.h>
void revers(char *str,int i,int j);
int main()
{
	char str[100];
	printf("Enter the string:");
	fgets(str,100,stdin);
			revers(str,0,strlen(str)-1);
	printf("%s",str);
}
void revers(char *str,int i,int j)
{
	if(i>=j)
		return;

	str[i]=str[i]^str[j];
	str[j]=str[i]^str[j];
	str[i]=str[i]^str[j];
	return revers(str,i+1,j-1);
}	
