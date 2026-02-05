#include <stdio.h>
#include <math.h>

int main(){


int num;
int sum = 0;
int copy;

printf("Enter a number:");
scanf("%d", &num);

copy = num;

while(copy!=0){
    sum = sum + pow((copy%10),3);
    copy = copy/10;
}

printf("The sum of digits is:%d", sum);
if(sum==num){
printf("As the sum of digits is equal to the number hence %d is an armstrong number");
}

else{
    printf("As the sum of digits is not equal to the number hence %d is not an armstrong number");
}
    return 0;
}