#include <stdio.h>


int fac_rec(int a){
    if(a==0)
    return 1;
return (a*fac_rec(a-1));
}

int fac(int b){
    int fact = 1;
    while(b>0){
        fact *= b;
        b--;
    }
return (fact);
}



int main(){

int num = 0;
printf("Enter a number:");
scanf("%d", &num);

printf("factorial using recursion:%d", fac_rec(num));
printf("\nfactorial without using recursion:%d", fac(num));
    return 0;
}