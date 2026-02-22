#include<stdio.h>

int main()
{
    // SWITCH
char Day; // m-mon; t-tue; w-wed; T-thu; f-fri; s-sat; S-sun;
printf("Enter A Day : ");
scanf("%c",&Day);

switch (Day){
   case 'm' : printf("Monday \n");
            break;
   case 't' : printf("Tuesday \n");
            break;
   case 'w' : printf("Wednesday \n");
            break;
   case 'T' : printf("Thursday \n");
            break; 
   case 'f' : printf("Friday \n");
            break;
   case 's' : printf("Saturday \n");
            break;
   case 'S' : printf("Sunday \n");
            break;
  default : printf("Not A Valid Day! \n");
}

return 0;}