#include<stdio.h>
int main(){
int n;
printf("Enter size of Array");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("\nEnter the %d value:",i+1);
scanf("%d",&arr[i]);
}
printf("\nReverse of Array:");
for(int i=n-1;i>=0;i--){
printf("\n%d",arr[i]);
}

}
