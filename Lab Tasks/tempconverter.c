#include<stdio.h>
int main(){

float temp_in_celcius;

printf("Enter Tempreture in Celcius: ");
scanf("%f",&temp_in_celcius);

float temp_in_farenheit = (((temp_in_celcius*9)/5))+32;

printf("%.2fC is equal to %.2fF.",temp_in_celcius,temp_in_farenheit);

getchar();
getchar();
    return 0;
}

// Executable files will not be added.