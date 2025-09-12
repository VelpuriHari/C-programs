#include<stdio.h>
#include<string.h>
int main()
{
	int s;
      char num[10];
	printf("Entre the num :");
	sscanf(num,"%d",&s);
	int i=0,j=strlen(num)-1;
	while(i<j)
	{
		if(num[i]!=num[j])
		{
			printf("Not palindrom");
			return 0;
		}
		i++;j--;
	}
	printf("Palindrom");
}
