#include <stdio.h>
#include <math.h>

int main(){

int num;
int pwr = 0;
int sum;

printf("Enter a Binary Number:");
scanf("%d", &num);

for(num;num > 0;num/=10){
sum += (num%10)*pow(2,pwr);
pwr++
}

printf("The number in decimal is:%d", sum);
    return 0;
}