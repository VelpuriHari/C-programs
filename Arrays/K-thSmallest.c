#include<stdio.h>
int main() {

    int arr[] = {12, 3, 5, 7, 19};
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        int key=arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
       printf("Enter the K value: ");
       int k;
       scanf("%d", &k); 
       printf("The %d-th smallest element is: %d\n", k, arr[k - 1]);
       
        
    
}