#include<stdio.h>
int fact(int n){
	if(n<=0){
		return 1;
	}
	return n*fact(n-1);
}

void main(){
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("Factorial of %d is  %d\n",n,fact(n));
}
