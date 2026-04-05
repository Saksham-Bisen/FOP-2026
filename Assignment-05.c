#include <stdio.h>


int main(){


int n_row;
int n_col;

printf("Enter the number of rows of the matrix:");
scanf("%d", &n_row);

printf("Enter the number of coloumns of the matrix:");
scanf("%d", &n_col);

int mat1[n_row][n_col];
int mat2[n_row][n_col];

int R1 = 0;

printf("Enter Matrix-1 elements row-wise:");
while(R1<n_row){
    int C1 = 0;
    while(C1<n_col){
        scanf("%d", &mat1[R1][C1]);
        C1++;
    }
R1++;
}

printf("Enter Matrix-2 elements row-wise:");
int R2 = 0;
while(R2<n_row){
    int C2 = 0;
    while(C2<n_col){
        scanf("%d", &mat2[R2][C2]);
        C2++;
    }
R2++;
}


int R3 = 0;
while(R3<n_row){
    int C3 = 0;
    while(C3<n_col){
        printf("|%d|", mat1[R3][C3] + mat2[R3][C3]);
        C3++;
    }
    printf("\n");
R3++;
}













return 0;
}