#include<stdio.h>
void fib(int n,int a,int b){
	if(n<=0){
		return;
	}
	printf("%d ",a+b);
	int c=a+b;
	a=b;
	b=c;
	return fib(n-1,a,b);
}

int main(){
	int n,a=0,b=1;
	printf("Entre the N value:");
	scanf("%d",&n);
	if(n==1){
		printf("0");
		return 0;
	}
	if(n==2){
                printf("0 1");
                return 0;
        }
	if(n<=0){
                printf("Entre N >0");
                return 0;
        }


	printf("0 1 ");
	fib(n-2,a,b);
}
