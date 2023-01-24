#include <stdio.h>

void add()
{
    int i , n , a[100] , sum=0 ;
      
    printf("\n Enter Number of digits to calculate = ");
    scanf("%d" , &n);

    for(i=0;i<n;i++)
    {
      printf("\n Enter %d number = " , i);
      scanf("%d" , &a[i]);

        sum += a[i];
    }
     
     printf("\n Addition = %d" , sum);
    
    }


void mult()

{
     int i , n , a[100] , mul=1 ;

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

void main()

{
    int i , n , sum=0 , a[100] , op , mul=1 ;

    printf("\n Enter 1 for Addition");
   
    printf("\n Enter 2 for Multiplication");
    

    printf("\n Enter Option Number = ");
    scanf("%d" , &op);


if(op==1)
{
    add(i,a[100],n,sum);
}
    

else if(op==2)
{
    mult(i,a[100],n,mul);
}
    

    else
    {
        printf("\n Enter valid option");
    } 

} 

