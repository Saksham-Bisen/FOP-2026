#include <stdio.h>
#include <string.h>

struct std_record {
    char name[20];
    int roll_no;
    float m1,m2;
    float result;
} s[3];

int main(){
    int i;
    printf("Enter Student Details\n");

    for(i=0;i<3;i++){
        printf("enter student name:");
        scanf("%s", s[i].name);
        printf("Enter Student Roll No.:");
        scanf("%d", &s[i].roll_no);
        printf("Enter Marks in two subjects:");
        scanf("%f %f", &s[i].m1, &s[i].m2);
        printf("\n");
    }

printf("----------------------------------------\n");
printf("Student Record\n");
    for(i=0;i<3;i++){
        printf("Name:%s\n", s[i].name);
        printf("Roll No.:%d\n", s[i].roll_no);
        printf("Result(Percentage):%.2f\n", (s[i].m1 + s[i].m2)/200*100);
        printf("-------------------------\n");
}
    return 0;
}