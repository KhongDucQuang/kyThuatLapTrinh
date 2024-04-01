#include <stdio.h>
int countEven(int* arr, int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if((*(arr+i))&1){
            continue;
        }
        count++;
    }
    return count;
}
int main(){
    int a[14] = {1,2,3,4,5,6,7,8,9,10,16,20,22,100};
    printf("%d", countEven(a,14));
}
