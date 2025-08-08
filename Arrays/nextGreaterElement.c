#include<stdio.h>
int main()
{
	int arr[]={3,1,6,2,5,8,9,4,7};
	for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
	{
		int nxtGer=-1,j=i+1;
		while(j<9 && arr[i]>arr[j])
		{
		    j++;
		 }
		 if(j>=9)
		 {
		 arr[i]=-1;
		 }
		 else{
		 arr[i]=arr[j];
		 }
	}
	for(int i=0;i<9;i++)
	{
	printf(" %d",arr[i]);
	}
}
