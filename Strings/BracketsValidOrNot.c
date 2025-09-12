#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	printf("Enter the string:");
	scanf("%s",str);
	char stack[100];
	int  top=-1,flag=1;
	for(int i=0;str[i];i++)
	{
		if(str[i]=='[' || str[i]=='{' || str[i]=='(' || str[i]=='<')
		{
			top++;
			stack[top]=str[i];
		}
		else{
		       	if(top>-1 || (str[i]==']' && stack[top]=='[')
				  || (str[i]==')' && stack[top]=='(')
				  || (str[i]=='}' && stack[top]=='{')
				  || (str[i]=='>' && stack[top]=='<')	  
				)
			{
				top--;
			}
			else{
				flag=0;
				printf("Not Valid");
				break;
			}
		}
	}
	if(flag && top==-1)
		printf("Valid");
	else
		printf("Invalid");
}
				
			
