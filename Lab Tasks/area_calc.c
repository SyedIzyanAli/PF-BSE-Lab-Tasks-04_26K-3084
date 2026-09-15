#include<stdio.h>
int main(){

float length;
float width;

printf("Enter Length of the Rectangle: ");
scanf("%f",&length);

printf("\nEnter Width of the Rectangle: ");
scanf("%f",&width);

float area = width * length;

float perimeter = ((2*length) + (2*width));

printf("\nThe Area of Rectangle is: %fsq.units",area);

printf("\nThe Perimeter of Rectangle is: %funits",perimeter);

    return 0;
}

// whole code was will be uploaded on the githubb repository.