#include <stdio.h>

int main(){

int num;
int sum = 0;
int copy;

printf("Enter a three digit number:");
scanf("%d", &num);

copy = num;

while(copy!=0){
    sum = sum + ((copy%10)*(copy%10)*(copy%10));
    copy = copy/10;
}

printf("The sum of digits is:%d\n", sum);
if(sum==num){
printf("As the sum of cube of digits is equal to the number hence %d is an armstrong number", num);
}

else{
    printf("As the sum of digits is not equal to the number hence %d is not an armstrong number", num);
}
    return 0;
}