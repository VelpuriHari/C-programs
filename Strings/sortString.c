#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Entre the string:\n");
fgets(str,100,stdin);
for(int i=0;i<strlen(str);i++){
char key=str[i];
int j=i-1;
while(j>=0&&str[j]>key){
str[j+1]=str[j];
j--;
}
str[j+1]=key;
}
printf("String :%s",str);
}
