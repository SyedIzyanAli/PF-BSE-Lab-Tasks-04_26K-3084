#include<stdio.h>
int main(){

int days;
printf("Enter the Number Of Late Days: ");
scanf("%d",&days);
if(days==0){
    printf("No Fine!");
}
else if ((0<days)&&(days<6)){
    printf("Fine: Rs. 50");
}

else if ((5<days)&&(days<11)){
    
    printf("Fine: Rs. 100");
}

else if (days>10){
        printf("Fine: Rs. 200");

}
    else{
        printf("Enter a Valid Input!");
    }
    getchar();
getchar();
    return 0;
}