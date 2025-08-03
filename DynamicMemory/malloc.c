#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int *a=(int *)malloc(2);
	*a=2;
	printf("%d",*a);
	printf("\nEntre the number :");
	scanf("%d",a);
	printf("\n%d",*a);
	//char
	char *c=(char *)malloc(3);
	printf("\nChar :");
	fgets(c,3,stdin);
//	scanf("%c",c);
//	*c='a';
	printf("\n%c",*c);
	//string
	char *s=(char *)malloc(20);
	printf("\nEnter the string:");
	scanf("%s",s);
	printf("\n%s",s);
	printf("\n%c",*(s+2));
}
