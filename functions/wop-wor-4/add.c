#include <stdio.h>

void add();

main()

{
   add();
}

void add()

{
    int c , a , b ; 

    
    printf("\n Enter number 1 = ");
    scanf("%d" , &a);

    printf("\n Enter number 2 = ");
    scanf("%d" , &b);
    
    c=a+b;

    printf("\n Sum is = %d" , c);
}