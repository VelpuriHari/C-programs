#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *arr=(char *)malloc(5*sizeof(char));
	printf("Enter your Name:");
//	arr="Hariveerenmdra";
	scanf("%s",arr);
	printf("%s",arr);
	arr=(char *)realloc(arr,5*sizeof(char));
	printf("%s",arr);	
	printf("ENter address\n");
	char add[20];
	scanf("%s",add);
	strcat(arr,add);
	printf("\n%s",arr);
	



}

