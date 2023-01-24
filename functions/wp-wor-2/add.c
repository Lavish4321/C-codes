#include <stdio.h>

void add(int a , int b);

main()

{
    int no1 , no2 ;

    printf("\n Enter number 1 = ");
    scanf("%d" , &no1);

    printf("\n Enter number 2 = ");
    scanf("%d" , &no2);

    add(no1,no2);
 
}

void add(int a , int b)

{
    int c ; 
    
    c=a+b;

    printf("\n Sum is = %d" , c);
}