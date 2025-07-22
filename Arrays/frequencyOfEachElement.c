#include<stdio.h>
int main(){
int n;
printf("\n Enter the size of array");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int seen[n]={};
for(int i=0;i<n;i++){
int key=arr[i];
int j=i-1;
while(key<arr[j]&&j>=0){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
for(int i=0;i<n;i++){
printf("\n%d ",arr[i]);
}



int i=0,j=1;
while(i<n){
if(j<n && arr[i]==arr[j]){
j++;
}
else{
printf("\n %d -> %d",arr[i],j-i);
i=j;
j++;
}}


}
