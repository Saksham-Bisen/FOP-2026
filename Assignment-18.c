#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

char string[20];
int lngt; //variable for string length
int lp_cnt; //variable for loop counter for reversing
int pal_cnt; //variable for palindrome loop
int i = 0; //variable 2 for palindrome
bool pal = true; //initial value of palindrome variable set to true

printf("Enter a string:");
scanf("%s", string);

// Finding the string length
lngt = strlen(string);
printf("The length of string is %d\n", lngt);


// Printing the string in reverse
printf("The string printed in reverse is:");

lp_cnt = lngt - 1;

for(lp_cnt;lp_cnt>=0;lp_cnt--){
    printf("%c", string[lp_cnt]);}



// Checking whether the string is a palindrome or not
pal_cnt = lngt - 1;
while(pal_cnt>=0){
    if(string[i] == string[pal_cnt]){
        pal = true;
        i++;
        pal_cnt--;
    }
    else{pal = false;break;}}


if(pal){
    printf("\nThe string is a palindrome");}
else{printf("\nThe string is not a palindrome");}

    return 0;
}