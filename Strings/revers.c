#include<string.h>
#include<stdio.h>
int main()
{
	char str[100];
	printf("Entre the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';

