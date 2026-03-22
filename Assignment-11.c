#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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
    bool prm = true;
    while(div<=(num/2)){
        if(num%div == 0 ){
            prm = false ; 
            break;
        }
        div++;
    }
    if(prm){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");}
    break;

case 5:

int fact = 1;
for(num;num>0;num--)
fact = fact*num;
    printf("The factorial of  number is :%d", fact);
    break;

case 6:
    int fac1=2;
   int fac2=2;
   
   while(fac1<num){
       if(num%fac1==0){
          int div = 2;
    bool prm = true;
    while(div<=(fac1/2)){
        if(fac1%div == 0 ){
            prm = false ; 
            break;
        }
        div++;
    }
    if(prm){
        printf("%d", fac1);
    }
    break; 
          
       }
       fac1++;
   }
   
   printf("\n");
   
   while(fac2<num){
       if(num%fac2==0 && fac2!=fac1){
          int div2 = 2;
    bool prm = true;
    while(div2<=(fac2/2)){
        if(fac2%div2 == 0 && fac2!=fac1){
            prm = false ; 
            break;
        }
        div2++;
    }
    if(prm){
        printf("%d", fac2);
    }
    break; 
          
       }
       fac2++;
   }
printf("\nThe prime factors are %d, %d", fac1, fac2);
    break;
}

    return 0;
}