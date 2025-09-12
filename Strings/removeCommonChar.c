#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("Enter the string1:");
	fgets(str1,100,stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("Enter the string2:");
	fgets(str2,100,stdin);
	str2[strcspn(str2,"\n")]='\0';
	char seen1[256]={0};
	char seen2[256]={0};
	size_t len=strlen(str1)>strlen(str2)?strlen(str1):strlen(str2);
	for(int i=0;i<len;i++)
	{
		if(i<strlen(str1))
			if(!seen1[str1[i]])
				seen1[str1[i]]++;
		if(i<strlen(str2))
			if(!seen2[str2[i]])
				seen2[str2[i]]++;
	}
	int i1=0,j1=0,i2=0,j2=0;
	while(str1[j1] || str2[j2])
	{
		if(str1[j1])
			if(seen1[str1[j1]] && seen2[str1[j1]])
				j1++;
			else
			{
				str1[i1]=str1[j1];
				i1++;
				j1++;
			}
		if(str2[j2])
			if(seen1[str2[j2]] && seen2[str2[j2]])
				j2++;
			else
			{
				str2[i2]=str2[j2];
				i2++;
				j2++;
			}
	}
	str1[i1]='\0';
	str2[i2]='\0';
	printf("\n%s\n%s",str1,str2);
}
