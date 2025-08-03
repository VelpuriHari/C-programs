#include<stdio.h>
void revers(int arr[],int i,int j){
	if(i>j){
		return;
	}
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	revers(arr,i+1,j-1);
}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int i=0,j=sizeof(arr)/sizeof(arr[0]);
	revers(arr,i,j-1);
	for(int i=0;i<10;i++){
		printf(" %d",arr[i]);
	}
}
