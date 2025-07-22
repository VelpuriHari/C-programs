#include<stdio.h>
int main(){
int arr1[][3]={{1,2,3},{4,5,6},{7,8,9}};
int arr2[][3]={{0,2,3},{87,9,4},{45,85,69}};
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("%d ",arr1[i][j]-arr2[i][j]);
}
printf("\n");
}
}
