#include <stdio.h>
#include <stdlib.h>
void allocate_Mem(int ***mt, int row, int col){
    *mt = (int**)malloc(row*sizeof(int*));
    if(*mt == NULL){
        printf("Khong du bo nho!");
        exit(-1);
    }
    for(int i=0; i<row; i++){
        (*mt)[i] = (int*)malloc(col*sizeof(int));
        if((*mt)[i] == NULL){
            printf("Khong du bo nho!");
            exit(-1);
        }
    }
}
void input(int **mt, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Nhap gia tri mt[%d][%d]", i,j);
            scanf("%d", &mt[i][j]);
        }
    }
}
void free_Mem(int **mt, int row, int col){
    for(int i=0; i<row; i++){
        free(mt[i]);
    }
    free(mt);
}
int** add_MaTrix(int **mt1, int **mt2, int row, int col){
    int **mtres;
    allocate_Mem(&mtres, row, col);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            mtres[i][j] = mt1[i][j]+mt2[i][j];
        }
    }
    return mtres;
}
int** mul_Matrix(int **mt1, int **mt2, int row, int col){
    int **mtres;
    allocate_Mem(&mtres, row, col);
    for(int i=0; i<row; i++){
        for(int j=0; j<col ; j++){
            int sum=0;
            for(int k=0; k< col; k++){
                sum+=(mt1[i][k]*mt2[k][j]);
            }
            mtres[i][j] = sum;
        }
    }
    return mtres;
}
int main(){
    printf("Khong Duc Quang");
    int row, col; printf("Moi nhap vao row, col: "); scanf("%d %d", &row, &col);
    int **mt1, **mt2;
    allocate_Mem(&mt1, row, col);
    allocate_Mem(&mt2, row, col);
    //printf("%d", getSize(mt1).row);
    input(mt1, row, col);
    input(mt2, row, col);
    int **mtres;
    allocate_Mem(&mtres, row, col);
    mtres = mul_Matrix(mt1, mt2, row, col);
    //struct sizeOf_Matrix sizeRes = getSize(mtres);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", mtres[i][j]);
        }
        printf("\n");
    }
    free_Mem(mt1, row, col);
    free_Mem(mt2, row, col);
    free_Mem(mtres, row, col);
    return 0;
}
