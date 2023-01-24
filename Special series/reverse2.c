#include <stdio.h>

main()

{
    int i , n , rev = 0 , rem;

    printf("\n Enter number = ");
    scanf("%d" , &n); // n = 325 - 325 % 10 = 5

    while(n!=0)
    {
        rem = n%10; // rem = 5 // rem = 2 // rem = 3

        rev = rev*10 + rem; // 0*10+5= 5 // 5 * 10 + 2 = 52 // 52 * 10 + 3 = 523

        n/=10; // 32 // 3 // 0
    }

    printf("\n Reversed number = %d" , rev);
}