#include<stdio.h>
#include<string.h>
int main()
{
	char c;
	printf("Enter the char:");
	scanf("%c",&c);
	if(c>='0' && c<='9')
	{
		printf("Char is Digit");
	}
	else{
		printf("Not Digit");
	}
}
