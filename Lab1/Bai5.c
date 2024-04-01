#include <stdio.h>
double* maximum(double* a, int size){
    double *max;
    if(a==NULL) return NULL;
    max = a;
    for(int i=1; i<size; i++){
        if(*max < *(a+i)){
            max = a+i;
        }
    }
    return max;
}
int main(){
    double arr[11] = {10.7,999.99, 15, 1, 19.7, 20, 17, 14, 34, 49, 2};
    printf("%.2lf", *maximum(arr,11));
}
