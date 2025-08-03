#include<stdio.h>
#include<string.h>
int main(){
char str1[100],str2[100];
printf("Entre the String 1");
fgets(str1,100,stdin);
printf("Entyre the string2");
fgets(str2,100,stdin);
if(strlen(str1)!=strlen(str2)){
printf("Different Length");
return 0;
}
for(int i=0;i<strlen(str1);i++){
if(str1[i]!=str2[i]){
printf("Not Equal");
return 0;
}
}
printf("Equal Strings");
}



