#include<stdio.h>
int main(){
char str[50];
printf("Enter the string");
scanf("%s",&str);
int i=0,len=0;
while(str[i]){
i++;
}
printf("Length of String is %d\n",i);
}

