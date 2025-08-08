#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a=(int *)malloc(sizeof(int));
	*a=10;
	printf(" %d",*a);
	a=(int *)realloc(a,5*sizeof(int));
	a[1]=20;
	printf("\n%d %d",*a,*(a+1));

//	a[1]=30;
//	prin
}
