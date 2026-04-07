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

printf("First Matrix:\n");
int R3 = 0;
while(R3<n_row){
    int C3 = 0;
    while(C3<n_col){
        printf("|%d|", mat1[R3][C3]);
        C3++;
    }
    printf("\n");
R3++;
}

printf("Second Matrix:\n");
int R4 = 0;
while(R4<n_row){
    int C4 = 0;
    while(C4<n_col){
        printf("|%d|", mat2[R4][C4]);
        C4++;
    }
    printf("\n");
R4++;
}
printf("Addition of two matrices:\n");
int R5 = 0;
while(R5<n_row){
    int C5 = 0;
    while(C5<n_col){
        printf("|%d|", mat1[R5][C5] + mat2[R5][C5]);
        C5++;
    }
    printf("\n");
R5++;
}


/*int sad = 0;
int R6 = 0;


while(R6<n_row){
    int in_r = 0;
    int in_c = 0;
    int C6 = 0;
    int R6t  = 0;


    while(C6<n_col){
            
            int C6t = 0;

        sad = mat1[R6t][C6t];
        in_c = C6t + 1;
        while(in_c < n_col){
            if(sad < mat1[R6t][C6t]){
                C6t++;
                in_c++;
            }
            else{sad = mat1[R6t][C6t];
                C6t++;
            in_c++;}
            }
            in_r = R6t + 1;
            while(in_r < n_row){
            if(sad > mat1[in_r][in_c]){
                in_r++;
            }
            else{break;}
        }
        
        C6++ ;

    }
R6++;
}

//printf("\n %d %d",R6t,  in_c);
printf("\n Saddle pint is %d", sad);

*/




return 0;
}