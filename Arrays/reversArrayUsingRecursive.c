#include<stdio.h>
void revers(int *arr,int i,int j){
	if(i>=j){
		return;
	}
//	printf(" %d",arr[i]);
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	revers(arr,i+1,j-1);
}
int main(){
	int arr[]={1,2,3,6,54,8,9};
	revers(arr,0,6);
	for(int i=0;i<7;i++)
	{
		printf(" %d",arr[i]);
	}
}
