#include<stdio.h>
#include<ctype.h>
int main(){
char c;
printf("Enter the Character");
scanf("%c",&c);
if(isdigit(c))
printf("It is digit");
else
printf("Not digti");
}

