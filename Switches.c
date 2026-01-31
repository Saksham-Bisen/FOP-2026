// Creating a menu driven program for Arithemetic Operations

#include <stdio.h>

int main(){


int choice;
int num1, num2;

printf("Enter the first number:");
scanf("%d", &num1);

printf("Enter the second number:");
scanf("%d", &num2);

printf("Enter the desired number\n 1 for addition\n2 for subtraction\n3 for multiplication\n4 for subtraction\n");
scanf("%d", &choice);

switch (choice)
{
case(1):
    printf("The addition of two numbers is :%d", num1+num2);
    break;
case(2):
    printf("The difference of two numbers is :%d", num1-num2);
    break;
case(3):
    printf("The Multiplication of two numbers is :%d", num1*num2);
    break;
case(4):
    printf("The Quotient after Division of two numbers is :%d", num1/num2);
    break;
default:
    printf("Invalid number entered");
    break;
}

    return 0;
}