#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,8,5,78};
	int temp=arr[0];
	for(int i=1;i<9;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[8]=temp;
	for(int i=0;i<9;i++)
	{
		printf(" %d",arr[i]);
	}
}
