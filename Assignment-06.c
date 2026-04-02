#include <stdio.h>

int fact_rec(int a){
    if(a==1||a==0){return 1;}
    return a*fact_rec(a-1);
}

int fact(int b){
    int ans = 1;
    while(b>0){
        ans = ans*b;
        b--;
    }
    return ans;
}

int main(){

int ans1;
int ans2;
int num ;

printf("Enter a number:");
scanf("%d", &num);

if(num<0){
    printf("Invalid input");
}
else{
    ans1 = fact(num);
    ans2 = fact_rec(num);
    printf("The factorial using recursion is %d\n", ans2);
    printf("The factorial using iteration is %d\n", ans1);
}
    return 0;
}