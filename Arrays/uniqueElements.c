#include<stdio.h>
int main(){
int n;
int seen[100]={0};
printf("Enter the Array size:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("Enter %d Element: ",i+1);
scanf("%d",&arr[i]);
seen[arr[i]]++;
}}
