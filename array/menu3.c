#include <stdio.h>

main()

{
    int i , n , sum=0 , a[100] , op , mul=1 ;

do
{
    printf("\n Enter 1 for Addition");
   
    printf("\n Enter 2 for Multiplication");

    printf("\n Enter 3 for exit");
    

    printf("\n Enter Option Number = ");
    scanf("%d" , &op);


if(op==1)
    {
      
    printf("\n Enter Number of digits to calculate = ");
    scanf("%d" , &n);

    for(i=0;i<n;i++)
    {
      printf("\n Enter %d number = " , i+1);
      scanf("%d" , &a[i]);
    
        sum += a[i];
    }
     
     printf("\n Addition = %d" , sum);
    
    }

else if(op==2)
    {

    printf("\n Enter Number of digits to calculate = ");
    scanf("%d" , &n);

    for(i=0;i<n;i++)
    {
      printf("\n Enter %d number = " , i+1);
      scanf("%d" , &a[i]);
    
   
        mul *= a[i];
    }
     
     printf("\n Multiplication = %d" , mul);
    
    } 

    else if(op==3)
    {
        printf("\n Vapas dikhna nahi");
    } 

    else 
    {
        printf("\n Ab ghoomta reh");
    }
}while(op!=3);


}



