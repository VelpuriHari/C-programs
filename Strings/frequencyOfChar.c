#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
	char ch, str[100];
	int seen[256]={0},large=INT_MIN,small=INT_MAX,smallchar=0,largechar=0;
	printf("Entre the string:");
	fgets(str,100,stdin);
	for(int i=0;str[i];i++)
	{	
		int indx=str[i];
		if(seen[indx]==0)
		{
		    seen[indx]++;
		   // small=small<=seen[indx]?small:indx;
		   // printf("\n%d %c",small,small);
		    continue;
		}
		seen[indx]++;
	//	large=large>seen[indx]?large:seen[indx];
	//	printf("%d\n",large);
	}
//	printf("\n The largest Frequency Char :%d and Smallest Frequency char :%d",large,small);
	for(int i=0;i<256;i++)
	{
		if(seen[i])
		{
			printf("\nChar :%c , Freq :%d",i,seen[i]);
		//	small=small<=seen[i]?small:i;
			if(small>seen[i])
			{
				small=seen[i];
				smallchar=i;
			}
			if(large<seen[i])
			{
				large=seen[i];
				largechar=i;
			}
		//	large=large>seen[i]?large:i;
		}
	}
	printf("\n The largest Frequency Char :%c and Smallest Frequency char :%c",largechar,smallchar);
}
		
			

