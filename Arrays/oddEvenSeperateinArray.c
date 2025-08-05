#include<stdio.h>
int main()
{
	int n;
	printf("entre the no.of Elements into array");
	scanf("%d",&n);
	int arr[n],odd[n],even[n],e=0,o=0;
	printf("Enter the numbers\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			even[e]=arr[i];
			e++;
			continue;
		}
		odd[o]=arr[i];
		o++;
		
	}
	printf("Even\n");
	for(int i=0;i<e;i++)
	{
		
	printf(" %d ",even[i]);
	}
	printf("\nOdd\n");
	for(int i=0;i<o;i++)
	{
		printf(" %d ",odd[i]);
	}
}

