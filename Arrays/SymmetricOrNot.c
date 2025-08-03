#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of Square Matrix Array:");
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			printf("\nEntre a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if(a[i][j]!=a[j][i]){
				printf("The Matrix is not Symetric");
				return 0;
			}
		}
	printf("The Matrix is Symetric");
}

