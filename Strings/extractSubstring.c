#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,j;
	printf("\nEntre the string:");
	scanf("%s",str);
	printf("Enter i and j values :");
	scanf ("%d%d",&i,&j);
	for(;i>=0,j<strlen(str),i<=j;i++)
	{
		printf("%c",str[i]);
	}
}

