#include<stdio.h>

int main()
{
int a;  // int a,b;12
int b;

printf("Enter a");
scanf("%d",&a);

printf("Enter b");
scanf("%d",&b);

int Sum = a + b;        // printf("Sum is %d",a + b);
printf("Sum is %d",Sum);

return 0;
}