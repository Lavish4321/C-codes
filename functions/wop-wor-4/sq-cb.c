#include <stdio.h>

void square()

{
    int n ;

    printf("\n Enter Number = ");
    scanf("%d" , &n);

    printf("\n Square = %d" , n*n);
}

void cube()

{
    int n ;

    printf("\n Enter Number = ");
    scanf("%d" , &n);

    printf("\n Cube = %d" , n*n*n);
}

void main ()

{

square();
cube();

}