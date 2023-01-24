#include <stdio.h>

main()

{
    int i , n , t1=0 , t2=1 , nxterm=t1+t2;

    printf("\n Enter limit = ");
    scanf("%d" , &n);


   printf("\n Fibonacci Series = %d %d " , t1 , t2);

   for(i=3;i<=n;i++)
{
    printf(" %d " , nxterm);

    t1=t2;
    t2=nxterm;
    nxterm=t1+t2;

}
}