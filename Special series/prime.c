#include <stdio.h>

main()

{
    int i=1 , n , prime=0;

    printf("\n Enter number = ");
    scanf("%d" , &n); // 5 // 6

    while(i<n/2) // 2<2.5
    {
      if(n%i==0) // 6%2
      {
        prime=1;
        break;
      }
      i++;
   }

   if(prime==0)
   {
     printf("\n Its a prime number ");
   }
   else
   {
     printf("\n Its not a prime number ");
   }
}