#include <stdio.h>
int main(){

float percentage;
float income;

printf("Enter Your Percentage: ");
scanf("%f",&percentage);
    
printf("\nEnter Your Family Income: ");
scanf("%f",&income);

if ((percentage>80)||(percentage==80)||(income<50000))
{
    printf("Qualified for Scholarship!");
}

else{
    printf("Not Qualified for Scholarship!");
}
getchar();
getchar();
    return 0;
}