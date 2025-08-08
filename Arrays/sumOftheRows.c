#include<stdio.h>
int main(){
	int n,m;
	printf("Entre the row and column size :");
	scanf("%d%d",&n,&m);
	printf("Entre the elements into matrix:\n");
	int count=0,arr[n][m],highsum=0;
	for(int i=0;i<n;i++)
	{int sum=0;
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		highsum=highsum<sum?sum:highsum;
		printf("\n");
}
printf("High sum:%d",highsum);
}

