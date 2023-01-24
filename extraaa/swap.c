#include <stdio.h>

void main ()

{
   
   int l , m , s ;

   l = 10;
   m = 50;

   s = l;
   l = m;
   m = s;

   printf("l = %d , m = %d\n " , l , m );

}