#include <stdio.h>
#include <math.h>

int fact(int a){
    if(a==1)
    return 1;
return (a*fact(a-1));
}

int main(){

int num_trm ;
int deg;

printf("Enter angle (in radian):");
scanf("%d", &deg);

printf("Enter Number of terms:");
scanf("%d", &num_trm);


int lp = 1;
int i = 0;
float sum = 0;

while(lp <= num_trm){
sum += ( deg*pow(-1,i) * pow(deg,((2*lp) - 1)) / fact(((2*lp) - 1)) );
i++;
lp++;
}

printf("The Sum of Sine Series is:%f", sum);
    return 0;
}