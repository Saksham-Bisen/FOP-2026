#include <stdio.h>
#include <string.h>

struct employee{
    char name[20];
    char designation[20];
    char gender[20];
    int date_joining;
    int sal;
} emp[2];

int main(){

int num_emp;
printf("Enter number of employees:");
scanf("%d", &num_emp);

int i = 0;
int cnt = 1;
printf("\n %d", num_emp);
printf("\n %d", i);

for(i;i<2;i++);{
    printf("\n%d", i);
    printf("Employee %d:\n", cnt);
    printf("Employee Name:");
    scanf("%s", emp[i].name);

    printf("Employee designation:");
    scanf("%s", emp[i].designation);

    printf("Employee gender:");
    scanf("%s", emp[i].gender);

    printf("Employee date of joining:");
    scanf("%d", &emp[i].date_joining);

    printf("Employee salary:");
    scanf("%d", &emp[i].sal);
    
    cnt++;

}

}