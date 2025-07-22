#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char *str=malloc(50);
printf("Enter the string :\n");
scanf("%s",str);
char str2[100];
printf("Entre the string 2:\n");
scanf("%s",&str2);
for(int i=0;i<strlen(str);i++){
if(str[i]!=str2[i]){
printf("\nNot Equal");
return 0;
}
}
printf("Equal");
return;
}

