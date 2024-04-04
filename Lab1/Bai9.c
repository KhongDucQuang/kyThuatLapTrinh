#include <stdio.h>
int a[1000];
int main(){
    int n;
    printf("Nhap vao gia tri cua n: "); scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                printf("%d ", a[k]);
            }
            printf("\n");
        }
        
    }
    return 0;
}
