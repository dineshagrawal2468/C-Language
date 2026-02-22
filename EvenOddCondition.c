#include<stdio.h>

int main()
{

int Number;
printf("Enter A Number : ");
scanf("%d",&Number);

if (Number >= 0){
    printf("Positive Number \n");
    if(Number % 2 == 0) {
        printf("Even Number \n");
    }
    else{
        printf("Odd Number \n");
    }
}
else{
    printf("Negative Number \n");
}


return 0;
}