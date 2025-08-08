#include<stdio.h>
int main()
{
	int arr[]={1,2,3,5,6,9};
	printf("Enter the start index and last index");
	int str,end;
	scanf("%d%d",&str,&end);
	str--;
	end--;
	while(str<end)
	{
		int temp=arr[str];
		arr[str]=arr[end];
		arr[end]=temp;
		str++;
		end--;

	}
	for(int i=0;i<6;i++)
	{
		printf(" %d",arr[i]);
	}

}
