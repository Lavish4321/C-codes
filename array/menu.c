#include <stdio.h>

main()

{
    int i , n , sum=0 , mul=1 , a[100] , op ;

    printf("\n Enter 1 for Addition");
   
    printf("\n Enter 2 for Multiplication");
    

    printf("\n Enter Option Number = ");
    scanf("%d" , &op);



    printf("\n Enter Number of digits to calculate = ");
    scanf("%d" , &n);

    for(i=0;i<n;i++)
    {
      printf("\n Enter %d number = " , i+1);
      scanf("%d" , &a[i]);
    }

if(op==1)
    {

    for(i=0;i<n;i++)
    {
        sum += a[i];
    }
     
     printf("\n Addition = %d" , sum);
    
    }

else if(op==2)
    {

    for(i=0;i<n;i++)
    {
        mul *= a[i];
    }
     
     printf("\n Multiplication = %d" , mul);
    
    }  

    else 
    {
        printf("\n Enter valid option ");
    }

} 

