#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100];
	printf("Entre the string:");
//	fgets(str,100,stdin);
	scanf("%s",str);
	int length=strlen(str);
	int i=0,j=0;
	char seen[26]={0};
	int subStringLen=0;
	for(int i=0;i<length;i++)
	{
	str[i]=tolower(str[i]);
	}
	while(j<length)
	{
	   int indx=str[j]-'a';
	   if(seen[indx]==0)
	   {
		   seen[indx]++;
		   j++;
	   }
	   else{
	//	seen[26]={0};
		for(int i=0;i<26;i++)
		{
			seen[i]=0;
		}
		for(int k=i;k<j;k++)
		{printf("%c",str[k]);
		}
		subStringLen=subStringLen<(j-i)?(j-i):subStringLen;
		i=j;
	   }
	}
	printf("Longest Non Repeating Size :%d",subStringLen);
}
