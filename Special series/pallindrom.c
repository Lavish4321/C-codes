#include <stdio.h>

main()

{
    int i , n , rev = 0 , rem , org;

    printf("\n Enter number = ");
    scanf("%d" , &n); 
    org=n;
    
    while(n!=0)
    {
        rem = n%10; 

        rev = rev*10 + rem;

        n/=10; 
    }

    if(rev==org)
    {
        printf("\n Its a Palli");
    }

    else
    {
        printf("\n Its not a Palli");
    }
}