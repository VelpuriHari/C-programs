#include<stdio.h>
int main(){
	int arr[4][4]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<3;i++)
	{
		int row=0,col=0;
		for(int j=0;j<3;j++)
		{
			row+=arr[i][j];
			col+=arr[j][i];
			printf(" %d",arr[i][j]);
		}
		arr[i][3]=row;
		arr[3][i]=col;
		printf(" %d",arr[i][3]);
		printf("\n");

	}
	printf(" %d %d %d",arr[3][0],arr[3][1],arr[3][2]);
}


