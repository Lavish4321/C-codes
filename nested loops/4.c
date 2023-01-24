/*
55555
4444
333
22
1
*/

#include <stdio.h>

int main()
{
    int i , j , n ;

    printf("\n Enter number of rows = ");
    scanf("%d" , &n);
    
    for(j=n;j>=1;j--)
    {
      for(i=1;i<=j;i++)
      {
          printf("%d" , j);
      }
      printf("\n");
    }
}