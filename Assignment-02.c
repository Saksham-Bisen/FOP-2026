// Creating a menu driven program for Arithemetic Operations
#include <stdio.h>

int main(){

int choice;
float num1, num2;

printf("Enter the first number:");
scanf("%f", &num1);

printf("Enter the second number:");
scanf("%f", &num2);

printf("Enter the desired number\n 1 for addition\n2 for subtraction\n3 for multiplication\n4 for Division\n5 for square\n6 for factorial\n");
scanf("%d", &choice);

switch (choice)
{
case(1):
    printf("The addition of two numbers is :%.2f", num1+num2);
break;

case(2):
    printf("The difference of two numbers is :%.2f", num1-num2);
break;

case(3):
    printf("The Multiplication of two numbers is :%.2f", num1*num2);
break;

case(4):
    if(num2==0){
        printf("Cannot divide by zero");
    }
    else{printf("The Result after Division of two numbers is :%.2f", num1/num2);}
break;

case(5):
    printf("The Square of two numbers are :%.2f, %.2f", num1*num1, num2*num2);
break;

case(6):

    float fac1=1;
    float fac2=1;
    float count1 = num1;
    float count2 = num2;

    while(count1>=1){
        fac1 = fac1*count1;
        count1--;
    }

    while(count2>=1){
        fac2 = fac2*count2;
        count2--;
    }

    if(num1 == 0)
        fac1=1;
    if(num2==0)
        fac2=1;
printf("the factorial of %.2f is %.2f\nthe factorial of %.2f is %.2f", num1, fac1, num2, fac2);
break;

default:
    printf("Invalid number entered");
break;

}
    return 0;
}
