#include <stdio.h>

int main(){

int num1;
int num2;
char choice;


printf("Enter the first number:");
scanf("%d", &num1);

printf("Enter the second number:");
scanf("%d", &num2);

printf("Enter 'G' for GCD and 'S' for SCD:");
scanf(" %c", &choice);

switch(choice){
case ('G'):
int old_div=1;
int new_div; 
    for(old_div;old_div<num1 && old_div<num2;old_div++){
    if(num1%old_div==0 && num2%old_div==0){
        new_div = old_div;
    }
}
printf("The GCD of numbers is %d", new_div);
break;

case ('S'):
int old_div1=2;
int new_div1; 
    for(old_div1;old_div1<num1 && old_div1<num2;old_div1++){
    if(num1%old_div1==0 && num2%old_div1==0){
        new_div1 = old_div1;
        break;
    }
}
printf("The SCD of numbers is %d", new_div1);
break;
}
return 0;
}