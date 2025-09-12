#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("sample.dat","wb");
	fp2=fopen("sample2.dat","wb");
	int n=0,sum=0;
	putw(123,fp1);
	putw(456,fp1);
	fclose(fp1);
	fp1=fopen("sample.dat","rb");
	while((n=getw(fp1))!=EOF)
	{
		printf("%d ",n);
		sum+=n;
	}
	printf("\n%d",sum);
	putw(sum,fp2);
}
