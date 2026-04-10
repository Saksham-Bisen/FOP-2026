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


int neg = -1;
int pwr = 0;
int term_pwr = 1;
float sum = 0;

while(num_trm>0){
sum += (deg*pow(neg,pwr)*pow(deg,term_pwr)/fact(term_pwr));
/*printf("%d\n", term_pwr);
printf("%d\n" ,fact(term_pwr));*/
pwr++;
term_pwr += 2;
num_trm--;
}

printf("The Sum of Sine Series is:%f", sum);
    return 0;
}