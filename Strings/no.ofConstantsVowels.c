#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
char str[100];
printf("Enter the string\n");
fgets(str,100,stdin);
int countVowel=0,countConstant=0;
for(int i=0;i<strlen(str);i++){
if(isalpha(str[i])){
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
countVowel++;
}
else{
countConstant++;
}
}
}
printf("\nVowels- %d Constant- %d\n",countVowel,countConstant);
}
