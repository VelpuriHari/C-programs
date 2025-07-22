#include<stdio.h>
int main(){
int n,m;
printf("Enter the row and column aize");
scanf("%d%d",&n,&m);
int arr1[n][m],arr2[n][m];
printf("\nEnter the elements intpo array 1");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&arr1[i][j]);
}
printf("\n");
}
printf("\nEnter the elements intpo array 2");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&arr2[i][j]);
}
printf("\n");
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(arr1[i][j]!=arr2[i][j]){
printf("Not Equal");
return 0;
}
}
}
printf("Equal");
}

