#include<stdio.h>

int main(){
	int n,bitSet=1,ind;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the index:");
	scanf("%d",&ind);
	bitSet=bitSet<<(ind-1);
	if(bitSet==(n&bitSet)){
		printf(" Set");
	}
	else{
		printf("Not Set");
	}
}

