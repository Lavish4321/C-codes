#include <stdio.h>

main()

{
    int i , n , a[100] , max=0 , min=0 ;
    
   

    printf("\n Enter number of digits =");
    scanf("%d" , &n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter %d number =" , i+1);
        scanf("%d" , &a[i]);
    }
    
     min=a[0];
    
    for(i=0;i<n;i++)
    {
       if(a[i]>max)
       {
         max=a[i];
       }
    }

      for(i=0;i<n;i++)
    {
       if(a[i]<min)
       {
         min=a[i];
       }
    }
    printf("\n Max = %d" , max);
    printf("\n Min = %d" , min);
    
}