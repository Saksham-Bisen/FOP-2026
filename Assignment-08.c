#include <stdio.h>

int main(){

int m1;
int m2;
int m3;
int m4;
int m5;
int prc;

printf("Enter marks in first course:");
scanf("%d", &m1);

printf("Enter marks in second course:");
scanf("%d", &m2);

printf("Enter marks in third course:");
scanf("%d", &m3);

printf("Enter marks in fourth course:");
scanf("%d", &m4);

printf("Enter marks in fifth course:");
scanf("%d", &m5);


if(m1>40 && m2>40 && m1>40 && m4>40 && m5>40){
    printf("Result = PASS");
}
else{
    printf("Result = FAIL");
}


prc = (m1+m2+m3+m4+m5)*100/500;

printf("\nPercentage = %d\n", prc);

if(prc>=75)
printf("Grade = DISTINGUISHED");

else if(prc>=60)
printf("Grade = FIRST DIVISION");

else if(prc>=50)
printf("Grade = SECOND DIVISION");

else if(prc>=40)
printf("Grade = THIRD DIVISION");


    return 0;
}