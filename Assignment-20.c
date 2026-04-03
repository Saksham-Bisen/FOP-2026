#include <stdio.h>

int swap(int a, int b){
int temp;
temp = a;
a = b;
b = temp;
printf("X=%d\tY=%d", a, b);
}

int swap_ptr(int *a, int *b){
int temp;
temp = a;
a = b;
b = temp;
printf("X=%d\tY=%d", *a, *b);
}


int main(){


int num1;
int num2;

printf("Enter the first number:");
scanf("%d", &num1);

printf("Enter the second number:");
scanf("%d", &num2);


printf("Without pointer:");
swap(num1, num2);
printf("\n");
printf("With pointer:");
swap_ptr(&num1, &num2);

    return 0;
}