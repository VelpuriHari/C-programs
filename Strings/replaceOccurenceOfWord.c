#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string:");
	fgets(str,100,stdin);
	printf("=>%s",str);
	char word[100];
	printf("Enter the Word that have to replaced:");
	char word2[100];
	fgets(word,100,stdin);
	printf("Enter the word that have to replaced with:");
	fgets(word2,100,stdin);
	str[strcspn(str,"\n")]='\0';
	word[strcspn(word,"\n")]='\0';
	word2[strcspn(word2,"\n")]='\0';
	char *token=strtok(str," ");
	char result[100];
	result[0]='\0';
	while(token!=NULL)
	{

		if(strcmp(token,word)==0)
		{
		strcat(result,word2);	
//			
		}
		else{
			strcat(result,token);
		}
		token=strtok(NULL," ");
		
		if(token!=NULL)
			strcat(result," ");		
	}
	printf("\n%s ",result);
}
	

