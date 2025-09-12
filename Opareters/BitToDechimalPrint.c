#include<stdio.h>
int main()
{
	char c;
	int num=0,i=0;
	printf("Entre the bits : ");
	while((c=getchar())!='\n')
	{
		if(c=='0')
		{
			num<<=1;
			num=num|0;
		}
		else
		{
			num<<=1;
			num=num|1;
		}
	//	i++;
	}
	printf("\n%d",num);
}

