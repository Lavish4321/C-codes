/*
+
++
+++
++++
+++++
++++++*/
#include <stdio.h>

int main()
{
    int i , j , n ;

    printf("\n Enter number of rows = ");
    scanf("%d" , &n);
    
    for(j=1;j<=n;j++)
    {
      for(i=1;i<=j;i++)
      {
          printf("+");
      }
      printf("\n");
    }
}