#include <stdio.h>

int main() {
    int n_row, n_col;

    printf("Enter the number of rows (use 3 for Inverse/Magic Square): ");
    scanf("%d", &n_row);
    printf("Enter the number of columns: ");
    scanf("%d", &n_col);

    int mat1[10][10], mat2[10][10]; 

    
    printf("Enter Matrix-1 elements:\n");
    int r = 0;
    while(r < n_row) {
        int c = 0;
        while(c < n_col) {
            scanf("%d", &mat1[r][c]);
            c++;
        }
        r++;
    }

    
    printf("Enter Matrix-2 elements:\n");
    r = 0;
    while(r < n_row) {
        int c = 0;
        while(c < n_col) {
            scanf("%d", &mat2[r][c]);
            c++;
        }
        r++;
    }

    
    printf("\nAddition of Matrices:\n");
    r = 0;
    while(r < n_row) {
        int c = 0;
        while(c < n_col) {
            printf("%d\t", mat1[r][c] + mat2[r][c]);
            c++;
        }
        printf("\n");
        r++;
    }

    
    int found_saddle = 0;
    r = 0;
    while(r < n_row) {
        int min_row = mat1[r][0], col_ind = 0;
        int c = 1;
        while(c < n_col) {
            if(mat1[r][c] < min_row) {
                min_row = mat1[r][c];
                col_ind = c;
            }
            c++;
        }
        int k = 0, is_saddle = 1;
        while(k < n_row) {
            if(mat1[k][col_ind] > min_row) {
                is_saddle = 0;
                break;
            }
            k++;
        }
        if(is_saddle) {
            printf("\nSaddle Point found: %d at (%d, %d)\n", min_row, r, col_ind);
            found_saddle = 1;
        }
        r++;
    }
    if(!found_saddle) printf("\nNo Saddle Point found.\n");

    
    if(n_row == n_col) {
        int sum_diag = 0, magic = 1, target_sum = 0;
        for(int i=0; i<n_row; i++) target_sum += mat1[0][i];

        
        for(int i=0; i<n_row; i++) {
            int rs = 0, cs = 0;
            for(int j=0; j<n_col; j++) {
                rs += mat1[i][j];
                cs += mat1[j][i];
            }
            if(rs != target_sum || cs != target_sum) magic = 0;
        }
        if(magic) printf("Matrix-1 is a Magic Square!\n");
        else printf("Matrix-1 is NOT a Magic Square.\n");
    }

   
    if(n_row == 2 && n_col == 2) {
        float det = (mat1[0][0] * mat1[1][1]) - (mat1[0][1] * mat1[1][0]);
        if(det != 0) {
            printf("\nInverse of Matrix-1:\n");
            printf("|%.2f  %.2f|\n", mat1[1][1]/det, -mat1[0][1]/det);
            printf("|%.2f  %.2f|\n", -mat1[1][0]/det, mat1[0][0]/det);
        } else printf("\nInverse does not exist (Det=0).\n");
    }

    return 0;
}