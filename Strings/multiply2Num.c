#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char  str[10],str2[10];
	printf("Entre 2 numbers:");
	scanf("%s%s",str,str2);
	int n1=atoi(str);
	int n2=atoi(str2);
	char prod[100];
//	itoa(n1*n2,prod,10);
	sprintf(prod,"%d",n1*n2);
	printf("Product :%s",prod);
}
