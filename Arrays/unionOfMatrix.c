#include<stdio.h>

int main()
{
	int arr[3][3],arr2[3][3],result[6][3];
	int seen[9]={0};
//	int freq[9]={0};
	int k=0;
	printf("Enter Elements into Array 1:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
			seen[k]=arr[i][j];
//			freq[k]++;
			k++;
			result[i][j]=arr[i][j];
		}
	}
	printf("Enter Array 2:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr2[i][j]);
			int num=arr2[i][j];
			for(int k=0;k<9;k++)
			{
				if(!(arr2[i][j]^seen[k]))
				{
					num=0;
				}
			}
			result[i+3][j]=num;
		}
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf(" %d",result[i][j]);
		}
		printf("\n");
	}	
}

	
