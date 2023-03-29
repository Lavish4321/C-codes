#include <stdio.h>

main()

{
    int i=2 , n , prime=0;

    printf("\n Enter number = ");
    scanf("%d" , &n); 

    while(i<=n/2) 
    {
      if(n%i==0) 
      {
        prime=1;
        break;
      }
      i++;
   }

   if(n==1)
   {
     printf("\n Its not a prime number ");
   }
   else if(prime==0)
   {
   	printf("\n Its a prime number");
   }
   else
   {
     printf("\n Its not a prime number ");
   }
}
