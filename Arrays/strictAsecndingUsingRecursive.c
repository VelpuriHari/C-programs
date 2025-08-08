#include<stdio.h>
int strict(int *arr,int i,int n);
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,10};
	if(strict(arr,0,8))
	{
		printf("Array is strict Ascending");
	}
	else{
		printf("Not strict Ascending");
	}
}
int strict(int *arr,int i,int n){
	if(i>=n)
	{
		return 1;
	}
	if( arr[i]>arr[i+1])
	{
	//	strict(arr,i+1,n);
		return 0;
	}
	return strict(arr,i+1,n);
	   
	//   return 0;
}

