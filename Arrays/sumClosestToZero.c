#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter the size of array");
scanf("%d",&n);
int arr[n];
printf("Enter the elemenets");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
int key=arr[i];
int j=i-1;
while(j>=0&&arr[j]>key){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
int left=0,right=n-1;
int ele1,ele2,c=INT_MAX;
while(left<right){
int sum=arr[left]+arr[right];
 if(abs(sum)<abs(c)){
c=sum;
ele1=arr[left];
ele2=arr[right];
}
if(sum<0){
left++;
}
else{
right--;
}
}
printf("%d  %d",ele1,ele2);
}


