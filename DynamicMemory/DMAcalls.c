#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a=(int *)malloc(sizeof(int));
	*a=10;
	printf("a=%d",*a);
	int *b=(int *)calloc(1,sizeof(int));
	*b=20;
	printf("b=%d",*b);
	a=(int *)realloc(a,2*sizeof(int));
	a[1]=40;
	a[2]=30;
	printf("b:%d , %d, %d",a[0],a[1],a[2]);
}
