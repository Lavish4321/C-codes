#include <stdio.h>

int add(int a , int b);

main()

{
    int ans , no1 , no2;

    printf("\n Enter number 1 = ");
    scanf("%d" , &no1);

    printf("\n Enter number 2 = ");
    scanf("%d" , &no2);

    ans=add(no1,no2);

    printf("\n Sum is = %d" , ans);
    
}

int add(int a , int b)

{
    int c ; 

    c=a+b;

    return c;
}