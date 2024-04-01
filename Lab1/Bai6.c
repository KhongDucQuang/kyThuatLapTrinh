#include <stdio.h>
void print(int a[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
}
void reversearray(int a[], int size){
    int l = 0, r = size - 1, tmp;
    for(int i=0; i<size/2; i++){
        tmp = a[i];
        a[i] = a[r-i];
        a[r-i] = tmp;
    }
}
void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    for(int i=0; i<size/2; i++){
        tmp = arr[i];
        arr[i] = arr[r-i];
        arr[r-i] = tmp;
    }
}
int main(){
    int arr[11] = {1,2,3,4,5,11,6,7,8,9,10};
    print(arr, 11);
    printf("\n");
    reversearray(arr,11);
    print(arr,11);
    printf("\n");
    ptr_reversearray(arr, 11);
    print(arr ,11);
}
