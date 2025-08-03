#include<stdio.h>
#include<string.h>
int main(){
	char str[100],str2[100];
	printf("Enter the String:");
	scanf("%s",str);
	printf("Entre the 2 string");
	scanf("%s",str2);
	int flag=1;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==str2[0]){
			int j=0;
			while(str2[j]==str[i+j]){
			//	if(str[i+j]!=str2[j]){
			//		flag=0;
			//	}
				j++;
			}
		//	printf("%d",j);
			if(j==strlen(str2)){
				printf("Found");
				flag=0;
				break;
			}
		}
	}
	if(flag){
		printf("Not Found");
	}
//	else{
//		printf("Not Found");
//	}
}
