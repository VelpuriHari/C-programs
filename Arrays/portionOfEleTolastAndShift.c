#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	printf("enter the no of elements to shift\n");
	int n;
	scanf("%d",&n);
	int temp[n];
	for(int i=0;i<n;i++)
	{
		temp[i]=arr[i];
	}
	for(int i=0;i<9;i++)
	{
		arr[i]=arr[i+n];
	}
	int j=0;
	for(int i=9-n;i<9;i++)
	{
		arr[i]=temp[j++];
	}
	for(int i=0;i<9;i++)
	{
		printf(" %d",arr[i]);
	}
}
