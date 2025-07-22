#include<stdio.h>
int main(){
int num;
int arrr[8],i=0;
int zero=0;
printf("Enter Num:");
scanf("%d",&num);
while(num>0){
arrr[i]=num%2;
i++;
if(num%2==0){
zero++;}
num=num/2;
}
for(int j=i-1;j>=0;j--){
printf("%d",arrr[j]);
}
printf("\nNo.of Zeros :%d",zero);
}
