#include<stdio.h>
int main(){
int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
int arr1[][3]={{12,32,52},{85,65,23},{2,3,5}};
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
int sum=0;
for(int k=0;k<3;k++){
sum=arr[i][k]*arr1[k][j]+sum;
}
printf("%d ",sum);
}
printf("\n");
}
}
