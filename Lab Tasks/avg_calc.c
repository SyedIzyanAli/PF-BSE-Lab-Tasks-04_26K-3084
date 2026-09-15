#include<stdio.h>
int main(){

    float num1,num2,num3;
    printf("Enter First Number: ");
    scanf("%f",&num1);
    
    printf("Enter Second Number: ");
    scanf("%f",&num2);
    
    printf("Enter Third Number: ");
    scanf("%f",&num3);

    float average = (num1 + num2 + num3)/3;

    printf("The Avergae of Entered Numbers is: %f",average);
    getchar();
    getchar();
    return 0;
}