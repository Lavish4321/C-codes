#include <stdio.h>
#include <math.h>

void main()

{
  float a , p , r , t ;

  printf("\n Enter Principal balance (p) = ");
  scanf("%f" , &p);

  printf("\n Enter Interest Rate (r)  = ");
  scanf("%f" , &r);

  printf("\n Enter Time elapsed (t) = ");
  scanf("%f" , &t);

  a = p*( pow (1 + r/100 , t));

    printf("\n Compound Interest = %f " , a );

}