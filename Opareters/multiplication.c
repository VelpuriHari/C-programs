#include<stdio.h>
#include<math.h>
int main()
{
	int num,p,result;
	printf("Enter the Hexa number and pow : ");
	scanf("%x %d",&num,&p);
	int err=0;
	result=num;
	for(int i=0;i<p;i++)
	{
		num=num<<1;
		if(num<result)
		{
			err=1;
			break;
		}
	result=num;
	}
	if(err==1)
		printf("Overflow");
	else
		printf("%d",num);


}	
