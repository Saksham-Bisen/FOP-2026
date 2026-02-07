#include <stdio.h>

int main(){

int mat[2][2];

int row ;
int col ;

printf("Enter elements Row Wise\n");

for(row=0;row<=1;row++){
    for(col=0;col<=1;){
        scanf("%d", &mat[row][col]);
        col++;}
}

printf("Printing the elements of the matrix\n");

for(row=0;row<=1;row++){
    for(col=0;col<=1;){
        printf("%d\t", mat[row][col]);
        col++;}
    printf("\n");
}
    return 0;
}