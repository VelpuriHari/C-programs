#include<stdio.h>
int main()
{
	int n,bits;
	printf("Enter Hexa num and no.of bits to rotate right");
	scanf("%x%d",&n,&bits);
	printf("%b",n);
	int rotate;
	for(int i=0;i<bits;i++)
	{
		rotate=n&1?1:0;
	//	if(rotate==0)
			n=(n>>1)&~(1<<15);
	//	else
	//		n=(n>>1)|(rotate<<15);
	}
	printf("\n%x",n);
}
