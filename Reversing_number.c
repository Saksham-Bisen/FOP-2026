#include <stdio.h>

int main(){

int num;
int copy;

printf("Enter a number:");
scanf("%d", &num);

copy = num;

while(copy!=0){

printf("%d", copy%10);
copy = copy/10;
}
    return 0;
}
