#include <stdio.h>
#include <string.h>

int main(){

int num_emp;
printf("Enter number of employees:");
scanf("%d", &num_emp);

struct employee{
    char name[20];
    char designation[20];
    char gender[20];
    int date_joining;
    int sal;
} emp[num_emp];

int i = 0;
int cnt = 1;


int emp_m = 0;
int emp_f = 0;
int emp_sal_grt = 0;
int emp_dsg_assmg = 0;

for(i;i<num_emp;i++){
    
    printf("Employee %d:\n", cnt);
    printf("Employee Name:");

    //scanf("%s", emp[i].name);
    //fgets(emp[i].name, sizeof(emp[i].name), stdin);

    scanf(" %[^\n]", emp[i].name); 
    

    printf("Employee designation:");
    //scanf("%s", emp[i].designation);
    scanf(" %[^\n]", emp[i].designation);
    

    printf("Employee gender:");
    //scanf("%s", emp[i].gender);
    scanf(" %[^\n]", emp[i].gender);
    

    printf("Employee date of joining:");
    scanf("%d", &emp[i].date_joining);

    printf("Employee salary:");
    scanf("%d", &emp[i].sal);
    
    if(emp[i].gender == "Male"){
        emp_m++;
    }
    else{
        emp_f++;
    }
    cnt++;

    if(emp[i].sal > 10000){
        emp_sal_grt++;
    }

    if(strcmp(emp[i].designation, "Assistant Manager")==0){
        emp_dsg_assmg++;
    }
}
printf("Number of Male employees:%d\n", emp_m);
printf("Number of Female employees:%d\n", emp_f);

int j = 0;
printf("Number of Employees with Salary More than 10,000:%d\n", emp_sal_grt);
if(emp_sal_grt!=0){
for(j;j<num_emp;j++){
    if(emp[j].sal > 10000){
        printf("%s", emp[j].name);
        printf("\n");
    }
}
}

printf("Employees with Designation Assitant Manager:%d\n", emp_dsg_assmg);
int k = 0;
if(emp_dsg_assmg!=0){
for(k;k<num_emp;k++){
    if(strcmp(emp[k].designation, "Assistant Manager") == 0){
        printf("%s", emp[k].name);
        printf("\n");
    }
}
}

 return 0;
}