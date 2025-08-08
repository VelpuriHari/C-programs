#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Entre the string:");
	fgets(str,100,stdin);
	int seen[256]={0};
	for(int i=0;str[i];i++)
	{
		if(!seen[str[i]])
		{
			seen[str[i]]++;
			int j=i+1;
			while(j<strlen(str))
			{
				if(str[j]==str[i])
				{
					int k=j+1;
					while(k<strlen(str))
					{
						str[k-1]=str[k];
						k++;
					}
					str[k-1]='\0';
					continue;
				}
				j++;
			}
		}
	}
	printf("=>%s",str);
}
