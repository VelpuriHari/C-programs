#include<stdio.h>
#include<string.h>
int Vowelcount(char *str,int i,int count)
{
	if(i>=strlen(str))
	{
		return count;
	}
	if(str[i]=='a' || str[i]=='e'||  str[i]=='i'||str[i]=='o'||str[i]=='u')
	{
		count++;
	}
	return Vowelcount(str,i+1,count);
}
int main()
{
	char str[100];
	printf("Entre the string:");
	fgets(str,100,stdin);
	printf("Vowels:%d",Vowelcount(str,0,0));
}
