#include <stdio.h>

main()

{
    int i , n , a[100] , pos=0 , neg=0 , zero=0;

    printf("\n Enter number of digits =");
    scanf("%d" , &n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter %d number =" , i+1);
        scanf("%d" , &a[i]);
    }
    
    for(i=0;i<n;i++)
    {
       if(a[i]>0)
       {
        pos++;
       }
       else if(a[i]<0)
        {
        neg++;
       }
       else
       {
        zero++;
       }
    }
    printf("\n %d numbers are positive" , pos);
    printf("\n %d numbers are negative" , neg);
    printf("\n %d numbers are zeros" , zero);
    

}