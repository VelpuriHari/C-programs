#include<stdio.h>
int main(){
int arr[]={1,2,3,5,6,4};
int sum=0;
for(int i=0;i<6;i++){
printf("%d",arr[i]);
sum+=arr[i];
}
printf("Sum of Array: %d",sum);
}
