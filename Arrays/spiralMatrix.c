#include<stdio.h>
int main()
{
	int arr[3][3];
	int top=0,left=0,bottom=2,rigth=2;
	int j=1;
	while(j<=3*3)
	{
		for(int i=left;i<=rigth;i++)
		{
			arr[top][i]=j;
			j++;
		}
		top++;
		for(int i=top;i<=bottom;i++)
		{
			arr[i][rigth]=j;
			j++;
		}
		rigth++;
		for(int i=rigth;i>=left;i--)
		{
			arr[bottom][i]=j;
			j++;
		}
		bottom--;
		for(int i=bottom;i>=top;i++)
		{
			arr[i][left]=j++;
			j++;
		}
		left++;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
}
