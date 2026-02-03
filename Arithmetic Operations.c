#include <stdio.h>

int main(){

int num1;
int num2;

printf("Enter the first number:");
scanf("%d", &num1);

printf("Enter the second number:");
scanf("%d", &num2);

printf("The Addition of both numbers is :%d", num1 + num2);
printf("The Subtraction of both numbers is :%d", num1 - num2);
printf("The Multiplication of both numbers is :%d", num1 * num2);
printf("The division of both numbers is :%.2f", num1 / num2);

return 0;
}
