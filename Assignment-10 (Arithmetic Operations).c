#include <stdio.h>
#include <math.h>

int main(){

int num1;
int num2;
int choice = 0;

printf("Enter the first number:");
scanf("%d", &num1);

printf("Enter the second number:");
scanf("%d", &num2);

printf("Choose the option from following\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for x^y\n6 for factorial of first number\n");
scanf("%d", &choice);

switch (choice){
case 1:
    printf("The Addition of both numbers is :%d", num1 + num2);
    break;
case 2:
    printf("The Subtraction of both numbers is :%d", num1 - num2);
    break;
case 3:
    printf("The Multiplication of both numbers is :%d", num1 * num2);
    break;
case 4:
    printf("The division of both numbers is :%.2f", num1 / num2);
    break;
case 5:
    printf("First number raised to the power of second number is :%d", pow(num1, num2));
    break;
case 6:

int fact = 1;
for(num1;num1>0;num1--)
fact = fact*num1;
    printf("The factorial of first numbers is :%d", fact);
    break;
}

return 0;
}
