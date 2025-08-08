#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,9,10};
	for(int i=0;i<8;i++)
	{
		arr[i]=arr[i]*arr[i];
	}
	for(int i=0;i<8;i++)
	{
		printf(" %d",arr[i]);
	}
}

