#include<stdio.h>
int main(){

int integer;

printf("Enter Integer: ");
scanf("%d",&integer);

int square = (integer)*(integer);

int cube = (integer)*(integer)*(integer);

printf("The Square of %d is %d.",integer,square);

printf("\nThe Cube of %d is %d.",integer,cube);

getchar();

    return 0;
}