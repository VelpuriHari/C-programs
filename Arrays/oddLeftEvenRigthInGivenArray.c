#include<stdio.h>
int main(){
	int n;
	printf("enter size:");
	scanf("%d",&n);
	int arr[n];
	printf("Entre the elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int i=0,j=n-1;
	while(i<j){
		while(i<j && arr[i]%2!=0)
			i++;
		while(i<j && arr[j]%2==0)
			j--;
		if(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
		}
	}
	for(int i=0;i<n;i++)
	{printf(" %d",arr[i]);
	}
}
