#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter thhe string;\n");
fgets(str,100,stdin);
int length=strlen(str);
for(int i=0;i<length;i++){
if(str[i]=='\n'||str[i]==' ')
str[i]='\0';
}
if(strlen(str)==0)
{
printf("words :0");
return 0;
}
int word=0;
for(int i=0;i<length;i++){
if(str[i]=='\0')
word++;
}
printf("Words:%d\n",word);
}
