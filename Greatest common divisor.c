#include <stdio.h>

int main(){

int num1;
int num2;

int old_div=1;
int new_div; 

printf("Enter the first number:");
scanf("%d", &num1);

printf("Enter the second number:");
scanf("%d", &num2);

for(old_div;old_div<num1 && old_div<num2;old_div++){
    if(num1%old_div==0 && num2%old_div==0){
        new_div = old_div;
    }
}
printf("The GCD of numbers is %d", new_div);
    return 0;
}