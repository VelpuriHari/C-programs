#include<stdio.h>
int main()
{
	int n;
	printf("Entre Hexdecimal 16 bit Num :");
	scanf("%x",&n);
	printf("Num : %x",n);
	n=(((n<<8)&0x0000ff00)|(n>>8));
	printf("\n%x",n);
}
