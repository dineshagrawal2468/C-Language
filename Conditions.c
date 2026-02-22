#include<stdio.h>

int main()
{
 int age;
 printf("Enter A Age : ");
 scanf("%d",&age);

 // Conditional Statement if,else if,else

 if(age >= 18) {
    printf("Adult \n");
    printf("They Can Vote \n");
    printf("They Can Drive \n");
 }
else if(age > 13 && age < 18) {
    printf("Teenager \n");
}
else {
    printf("Child \n");
}

printf("Thank You \n");

// Ternary oprator

age >= 18 ? printf("Adult \n") : printf("Not Adult \n");


// SWITCH
int Day; // 1-mon; 2-tue; 3-wed; 4-thu; 5-fri; 6-sat; 7-sun;
printf("Enter A Day(1-7) : ");
scanf("%d",&Day);

switch (Day){
   case 1 : printf("Monday \n");
            break;
   case 2 : printf("Tuesday \n");
            break;
   case 3 : printf("Wednesday \n");
            break;
   case 4 : printf("Thursday \n");
            break; 
   case 5 : printf("Friday \n");
            break;
   case 6 : printf("Saturday \n");
            break;
   case 7 : printf("Sunday \n");
            break;
  default : printf("Not A Valid Day! \n");





}


 return 0;
}