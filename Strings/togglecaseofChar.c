#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char str[150];
printf("Entre the String\n");
fgets(str,150,stdin);
for(int i=0;i<strlen(str);i++){
if(islower(str[i])){
str[i]=toupper(str[i]);
}else if (isupper(str[i])){
str[i]=tolower(str[i]);
}
}
printf("\n%s",str);
}
