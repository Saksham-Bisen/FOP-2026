#include <stdio.h>


int main(){


int mat[2][2];

int row ;
int col ;

printf("Enter elements Column Wise\n");

for(row=0;row<=1;row++){

    for(col=0;col<=1;){
        scanf("%d", &mat[row][col]);
        col++;
    }
}

printf("Printing the elements of the matrix\n");


printf("%d\n", mat[0][0]);
printf("%d\n", mat[0][1]);
printf("%d\n", mat[1][0]);
printf("%d\n", mat[1][1]);

for(row=0;row<=1;row++){
   
    for(col=0;col<=1;){
        printf("%d\n1", mat[row][col]);
        printf("%d\n", row);
        printf("%d\n", col);
        col++;
        
    }
}
    return 0;
}