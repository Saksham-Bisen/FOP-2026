#include <stdio.h>
int main(){
    
int num;
printf("Enter the amount of numbers:");
scanf("%d", &num);
int arr[num];

printf("Enter numbers in the array:");
for(int i=0;i<num;i++){
    scanf("%d", &arr[i]);
}

int cont_eve = 0;
int cont_odd = 0;

printf("Even number are:");
for(cont_eve;cont_eve<num;cont_eve++){
    if(arr[cont_eve]%2 == 0){
        printf("%d ", arr[cont_eve]);
    }
}

printf("\n");

printf("Odd number are:");
for(cont_odd;cont_odd<num;cont_odd++){
    if(arr[cont_odd]%2 != 0){
        printf("%d ", arr[cont_odd]);
    }
}
return 0;
}