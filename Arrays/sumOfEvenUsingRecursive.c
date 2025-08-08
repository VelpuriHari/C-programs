#include<stdio.h>
int fun(int *arr,int i,int n,int sum);
int main()
{
	int arr[]={1,2,3,6,5,4,7,8,9};
	printf("Sum of Even Numbers :%d",fun(arr,0,9,0));
			
}
int fun(int *arr,int i,int n,int sum)
{
if(i>=n)
{
return sum;
}
sum+=arr[i];
return fun(arr,i+1,n,sum);
}
