#include<stdio.h>
int main(){
int arr[]={1,2,3,6,5,12,52,5,21,5};
printf("{1,2,3,6,5,12,52,5,21,5};");
printf("Entre the postion to delete the element");
int n,size=10;
scanf("%d",&n);
for(int i=n-1;i<10-1;i++){
arr[i]=arr[i+1];
}
size-=1;
for(int i=0;i<size;i++){
printf("  %d",arr[i]);
}
}


