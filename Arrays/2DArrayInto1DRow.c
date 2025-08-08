#include<stdio.h>
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int row[1][3*3],k=0;
	for(int i=0;i<3;i++)
	{
		//printf(" %d",row[0][i]);
		for(int j=0;j<3;j++){
			row[0][k]=arr[i][j];
			k++;
		}
	}
	for(int i=0;i<3*3;i++)
	{
		printf(" %d\n",row[0][i]);
	}
}
