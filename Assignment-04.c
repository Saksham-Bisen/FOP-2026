#include <stdio.h>

int main(){
    
int basic_pay;
float HRA;
float TA;
float Tax;
float total_salary;
float net_salary;

printf("Enter the basic salary:");
scanf("%d", &basic_pay);
    
HRA = basic_pay*0.1;
TA = basic_pay*0.05;
total_salary = basic_pay + HRA + TA;
net_salary = total_salary*(1-0.02);
    
printf("The Net Salary of the employee is %.2f", net_salary); 
    return 0;
}