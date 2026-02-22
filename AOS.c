#include<stdio.h>
// Area Of Square
int main()
{
    int Side;
    printf("Enter a Side");
    scanf("%d",&Side);

    int AOS = Side * Side ;   // printf("Area Of Square Is %d",Side*Side);
    printf("Area Of Square Is %d",AOS);

    return 0;
}