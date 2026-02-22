#include<stdio.h>
// Area Of Circle
int main()
{
    int Radius;
    printf("Enter a Radius");
    scanf("%d",&Radius);

    float AOC = 3.14 * Radius * Radius ;   // printf("Area Of Circle Is %d",3.14 * Radius * Radius);
    printf("Area Of Circle Is %f",AOC);

    return 0;
}