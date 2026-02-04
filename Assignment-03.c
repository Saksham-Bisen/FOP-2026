#include <stdio.h>

int main(){

int i;
int a ;
printf("Enter a number:");
scanf("%d", &a);

printf("The table of %d is:\n", a);

for(i=1;i<=10;i++){
    printf("%d X %d = %d\n", a, i, a*i);
}
    return 0;
}