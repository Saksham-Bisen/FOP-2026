#include <stdio.h>
#include <math.h>

int main(){

int num;
int choice;

printf("Enter a number:");
scanf("%d", &num);

printf("Choose the option from following\n1 for Square Root\n2 for Square\n3 for Cube\n4 to check whether the number is prime\n5 for factorial of first number\n6 for prime factors\nUser's Choice:");
scanf("%d", &choice);

switch (choice){
case 1:
    printf("The Square Root of  number is :%.2f", sqrt(num) );
    break;
case 2:
    printf("The Square of  number is :%d", (int)pow(num,2) );
    break;
case 3:
    printf("The Cube of  number is :%d", (int)pow(num,3) );
    break;
case 4:
    int div = 2;
    while(div<=(num/2)){
        if(num%div==0){
            printf("The number is not prime");
        }
        else{
            printf("The number is prime");
        }
    }
    break;
case 5:

int fact = 1;
for(num;num>0;num--)
fact = fact*num;
    printf("The factorial of  number is :%d", fact);
    break;


case 6:
    
    break;
}
    return 0;
}