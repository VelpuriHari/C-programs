#include<stdio.h>
int main(){
int n,m;
printf("Enter two array sizes:");
scanf("%d %d",&n,&m);
int arr1[n],arr2[m],sum[n+m];
for(int i=0;i<n;i++){
printf("Enters Elemenet %d: ",i+1);
scanf("%d",&arr1[i]);
}
for(int i=0;i<m;i++){
printf("Enters Elemenet %d: ",i+1);
scanf("%d",&arr2[i]);
}
for(int i=0;i<n+m;i++){
if(i<n){
sum[i]=arr1[i];
}
else{
sum[i]=arr2[i-n];
}
}
for(int i=0;i<n+m;i++){
int key=sum[i];
int j=i-1;
while(j>=0&&sum[j]<key){
sum[j+1]=sum[j];
j--;
}
sum[j+1]=key;
}
for(int i=0;i<n+m;i++){
printf("%d ",sum[i]);
}
}
