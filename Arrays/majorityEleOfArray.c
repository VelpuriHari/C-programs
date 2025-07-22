#include<stdio.h>
int main(){
int n;
printf("Enter the size of array");
scanf("%d",&n);
int arr[n];
printf("Enter the elenents intp array");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
int key=arr[i];
int j=i-1;
while(j>=0&&arr[j]<key){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
int i=0,j=1;
int majority=0;
while(i<n){
if(arr[i]==arr[j]){
j++;
}
else{
majority=(j-i)>n/2?arr[i]:0;
i=j;
j++;
}
}
printf("Majority %d",majority);
}
