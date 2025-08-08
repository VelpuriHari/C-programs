#include<stdio.h>
int main(){
	 int arr[]={1,2,6,4,5,6,9,10};
	for(int i=0;i<8;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	int i=0,j=1;
	while(j<8)
	{
		if(arr[i]!=arr[j])
		{
			printf(" %d",arr[i]);
			i++;
			j=i+1;
		}else{
			while(arr[i]==arr[j])
			{
				j++;
			}
			i=j;
			j=i+1;
		}
	}
}
