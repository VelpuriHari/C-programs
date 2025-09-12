#include<stdio.h>
int add(int a,int b)
{

	while(b!=0)
	{
		int carry=(a&b)<<1;
		a=a^b;
		b=carry;
	}
	return a;
}
int main()
{
	int a,b;
	printf("Entre the numbers a,b:");
	scanf("%d%d",&a,&b);
	printf("%d",add(a,add((~b),1)));
}
