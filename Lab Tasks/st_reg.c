#include<stdio.h>
int main(){

char name[100];
printf("Enter Your Name: ");
fgets(name,sizeof(name),stdin); //Takes the whole name as input i.e full line.

printf("Student Registered: ");
puts(name);

char ch;
printf("Enter First Character of Your Name: ");
ch = getchar();  // Takes a Single character as Input i.e: I.
printf("Character Typed is: ");
putchar(ch);
getchar();
getchar();
    return 0;
}

// whole code was will be uploaded on the githubb repository.