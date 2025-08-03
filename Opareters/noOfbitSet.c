#include<stdio.h>
int noBitsSet(int x){
int count=0;
while(x){
	count+=x&1;
	x>>=1;
}
return count;
}
void noBitsNotSet(int x){
	int countSet=0,countNotSet=0;
	while(x){
		if(x&1!=0){
			countSet++;
		}
		else{
			countNotSet++;
		}
		x>>=1;
	}
	printf("Set Bits:%d",countSet);
	printf("\nNot Set:%d",countNotSet);
}

int main(){
int n;
printf("Enter the Number:");
scanf("%d",&n);
noBitsNotSet(n);
}
