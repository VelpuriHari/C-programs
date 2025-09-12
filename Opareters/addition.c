#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the Numbers a,b:");
	scanf("%d %d",&a,&b);
//printf("Sum of the is :%d",(a|b)+(a&b));
	while(b!=0)
	{
		int carry=(a&b)<<1;
		a=a^b;
		b=carry;
	}
	printf("%d",a);

	
}
