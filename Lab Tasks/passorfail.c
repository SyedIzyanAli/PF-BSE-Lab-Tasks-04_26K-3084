#include<stdio.h>
int main(){

float marks;
printf("Enter Your Marks: ");
scanf("%f",&marks);

if ((marks==50)||(marks>50))
{
    printf("Pass!");
}
else{
    printf("Fail!");
}
getchar();


    return 0;
}