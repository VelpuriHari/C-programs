#include<stdio.h>
int main(){
int n;
//int seen[100]={0};
printf("Enter the Array size:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("Enter %d Element: ",i+1);
scanf("%d",&arr[i]);
//seen[arr[i]]++;
}
for(int i=0;i<n;i++){
int key=arr[i];
int j=i-1;
while(j>0 && arr[j]<key){
	arr[j+1]=arr[j];
	j--;
}
arr[j+1]=key;
}

for(int i=0;i<n;i++)
{
	printf(" %d ",arr[i]);
}

printf("\n"); 
for(int i=0;i<n;i++)
{
    int j=i+1,count=0;
    while(j<n-1 && arr[i]==arr[j])
    {
	    count++;
	    j++;
    }
    if(count==0){
	    printf(" %d",arr[i]);
	    continue;
    }
    i=j-1;

}


}
