#include <stdio.h>
#include <math.h>
int main(){

int num;
int sum = 0;
int copy;
int counter;
int pwr = 0;

printf("Enter a three digit number:");
scanf("%d", &num);

counter = num;
copy = num;

while(counter!=0){
    pwr++;
    counter /= 10;
}


while(copy!=0){
    sum = sum + (pow((copy%10), pwr));
    copy /= 10;
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