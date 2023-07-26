#include <stdio.h>

void reverse(int *arr, int n);

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    printf("Our original  Array is : ");
    for(int i=0;i<8;i++){
        printf("%d ", arr[i]);
    }
    reverse(arr,8);

    printf("\nArray in reverse order : ");
    for(int i=0;i<8;i++){
        printf("%d ", arr[i]);
    }
return 0;
}

void reverse (int *arr, int n){
    int temp;
    for (int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}