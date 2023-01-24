#include <stdio.h>

int add();

main()

{
    int ans ;

    ans=add();
 
    printf("\n Sum is = %d" ,ans);
}

int add()

{
    int c , a , b ; 

    
    printf("\n Enter number 1 = ");
    scanf("%d" , &a);

    printf("\n Enter number 2 = ");
    scanf("%d" , &b);
    
    c=a+b;

    return c;
}