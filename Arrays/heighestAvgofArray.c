#include<stdio.h>
int main(){
int n;
printf("Entre the No .of Elem");
scanf("%d",&n);
int arr[n];
printf("Entre the Elments");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the K value");
int k;
scanf("%d",&k);
if(n<k){
printf("\nN is < K");
return 0;
}
int longAVg=0;
for(int i=0;i<n-k;i++){
int avg=0;
for(int j=0;j<k;j++){
avg+=arr[i+j];
}
avg/=k;
longAVg=avg>longAVg?avg:longAVg;
}
printf("Max Avg is %d",longAVg);
}
