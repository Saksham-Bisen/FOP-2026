#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

char string1[20];
char string2[20];
int lngt; //variable for string length
int lp_cnt; //variable for loop counter for reversing
int pal_cnt; //variable for palindrome loop
int i = 0; //variable 2 for palindrome
bool pal = true; //initial value of palindrome variable set to true

printf("Enter a string:");
scanf("%s", string1);

printf("Enter a second string for substring checking:");
scanf("%s", string2);

// Finding the string length
lngt = strlen(string1);
printf("The length of string is %d\n", lngt);


// Printing the string in reverse
printf("The string printed in reverse is:");

lp_cnt = lngt - 1;

for(lp_cnt;lp_cnt>=0;lp_cnt--){
    printf("%c", string1[lp_cnt]);}



// Checking whether the string is a palindrome or not
pal_cnt = lngt - 1;
while(pal_cnt>=0){
    if(string1[i] == string1[pal_cnt]){
        pal = true;
        i++;
        pal_cnt--;
    }
    else{pal = false;break;}}


if(pal){
    printf("\nThe string is a palindrome");}
else{printf("\nThe string is not a palindrome");}


// Checking for sustring
printf("\n");
if(strstr(string1, string2)!= NULL){
    printf("The substring is present in the main string");
}
else{
    printf("The substring is not present in the main string");
}
    return 0;
}