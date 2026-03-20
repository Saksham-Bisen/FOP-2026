#include <stdio.h>

int main(){

int num;


printf("Enter a number:");
scanf("%d", &num);


for(num;num>0;num/=10){
    printf("%d", num%10);
}
    return 0;
}