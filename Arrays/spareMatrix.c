#include<stdio.h>
int main()
{
	int n,m;
	printf("Entre the row and column size :");
	scanf("%d%d",&n,&m);
	printf("Entre the elements into matrix:\n");
	int count=0,arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==0)
				count++;
		}
		printf("\n");
}
	if(count>((n*m)/2)){
		printf("\nMatrix is Spare:");
	}
	else{
		printf("\nNot Spare Matrix");
	}
}

