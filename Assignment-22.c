#include <stdio.h>
#include <string.h>


int main(){

char string1[20];
char string2[20];
int lngt;
int choice;

printf("Enter a string:");
scanf("%s", string1);

printf("Enter a second string for substring checking:");
scanf("%s", string2);

printf("Enter 1 for length of string\nEnter 2 for Copying string 1 into string 2\nEnter 3 for Concatinating Both Strings\nEnter 4 for Comparing both strings\nUser's choice:");
scanf(" %d", &choice);

switch(choice){
case 1:// Finding the string length
lngt = strlen(string1);
printf("The length of string is %d\n", lngt);
break;


case 2:// Copying the first string into the secong string
strcpy(string2, string1);
printf("String 1:%s", string1);
printf("String 2:%s", string2);
break;


case 3:// Concatinating Both Strings
printf("After concatinating both string we get:%s", strcat(string1, string2));
break;


case 4:// Comparing two Strings
printf("\n");
printf("Value after Comparing both strings is:%d", strcmp(string1, string2));
break;
}
    return 0;
}