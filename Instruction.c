#include<stdio.h>
#include<math.h> // for power   

/* INSTRUCTION
There are statements in a program */

int main()
{
// Type Declaration Instruction
 
int k = 20;
int l = k ; 
int m = l + 1;
int n = 1,o;

int x,y,z;
x = y = z = 4;
 
//Arithmatic Instruction 

int a = 6, b = 5;

int Sum = a + b;
int Multiply = a * b;
int Sub = a - b;
int Divide = a / b;
int Reminder = a % b;
int Power = pow(a,b);

printf("%d \n",5%3);
printf("%d \n",-5%3);

// Type Conversion

printf("%d \n",5*3);
printf("%f \n",5.0*3);
printf("%f \n",5.0*3.0);
printf("%d \n",2%3);
printf("%f \n",2%3);
printf("%d \n",3/2);
printf("%f \n",3/2);
 
// Typecatng
int p = (int)1.99999;
printf("%d \n",p);

//Operator Precedence
printf("%f \n",4+9*10);
printf("%f \n",4*3/6*2);

/*CONTROL INSTRUCTION
Used to determine flow of program*/

 // Relational Operator

printf("%d \n", 4 == 4);
printf("%d \n", 4 == 3);
printf("%d \n", 4 >= 3);
printf("%d \n", 4 > 3);
printf("%d \n", 4 < 3);
printf("%d \n", 4 <= 3);
printf("%d \n", 4 != 3);
printf("%d \n", 4 != 4);

// Logical Operator

printf("%d \n", 4>3 && 5>2);
printf("%d \n", 3>4 && 5>2);
printf("%d \n", 3>4 || 5>2);
printf("%d \n", 4>3 || 5>2);
printf("%d \n", !(4>3));
printf("%d \n", !(5>7));
printf("%d \n", !(4>3 && 1>2));

a += b; // a = a + b
printf("%d \n",a);

a -= b; // a = a - b
printf("%d \n",a);

a *= b; // a = a * b
printf("%d \n",a);

a /= b; // a = a / b
printf("%d \n",a);

a %= b; // a = a % b
printf("%d \n",a);

// Practise question 7

printf("%d \n", 8^8); // valid but not in form of power

int X; int Y = X; //valid 

// int x,y=x; not valid

char stars = '**'; // not valid because multi character

// Practise Question 8

int issunday = 1;
int issnowing = 1;
printf("%d \n",issunday && issnowing);

issunday = 0;
printf("%d \n",issunday && issnowing);

int ismonday = 0;
int israining = 1;
printf("%d \n",ismonday || israining);

int V;
printf("Enter A Number : ");
scanf("%d",&V);
printf("%d \n", V>9 && V<100);



return 0;
}