#include<stdio.h>
int main(){
int arr[]={1,58,63,21,49,58,2,57,5,94,7,24,86,2,54};
printf("{1,58,63,21,49,58,2,57,5,94,7,24,86,2,54};i");
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
int key=arr[i];
int j=i-1;
while(j>=0 && arr[j]>key){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
for(int i=0;i<15;i++){
printf(" %d ",arr[i]);
}
int n;
int left=0,right=15-1;
printf("Enter the element to search");
scanf("%d",&n);
while(left <=right){
int mid=(left+right)/2;
if(n==arr[mid]){
printf("Found at %d position",mid+1);
break;
}
else if(n>arr[mid]){
left=mid+1;
}
else {
right=mid-1;
}
}
}


