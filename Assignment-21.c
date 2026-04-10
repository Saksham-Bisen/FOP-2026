#include <stdio.h>
#include <stdlib.h>

int main(){

FILE *source, *dest;
char ch;

source = fopen("source.txt", "r");
if(source == NULL){
    printf("File Not Found");
    exit(1);
}

dest = fopen("dest.txt", "r");
if(dest == NULL){
    printf("File Not Found");
    exit(1);
}

while((ch = fgetc(source))!=EOF){
    fputc(ch, dest);
}

printf("file Copying Complete");
    return 0;
}