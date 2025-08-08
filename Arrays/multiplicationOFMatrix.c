#include<stdio.h>
int main()
{
	int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int arr2[3][3]={{9,8,7},{4,5,6},{1,2,3}};
	int result[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			int prod=0;
			for(int k=0;k<3;k++)
			{
				prod+=arr1[i][k]*arr2[k][j];
			}
			result[i][j]=prod;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
}
				
