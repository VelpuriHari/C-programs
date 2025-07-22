#include<stdio.h>
int main(){
int n;
printf("Enter the size of Array");
scanf("%d",&n);
int arr[n];
printf("Enter the elements into Array");
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
int j=1;
for(int i=0;i<n-1;i++){
if(arr[i]+1!=arr[i+1]){
printf("Missing element is - %d",arr[i]+1);
break;
}
}
}



