#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter the string :\n");
scanf("%s",&str);
char individual[strlen(str)];
for(int i=0;i<strlen(str);i++){
individual[i]=str[i];
}
for(int i=0;i<strlen(individual);i++){
printf("\n%c",individual[i]);
}
}

