#include<stdio.h>
int main()
{
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	if(num&1)
		printf("ODD");
	else
		printf("Even");
}
