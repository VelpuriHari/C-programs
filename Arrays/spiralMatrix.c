#include<stdio.h>
int main()
{
	int arr[3][3];
	int top=0,left=0,bottom=3-2,rigth=3-2;
	int i=1;
	while(i<=3*3)
	{
		for(;left<3;left++,i++)
		{
			arr[top][left]=i;
		}
		for(;
