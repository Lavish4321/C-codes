#include <stdio.h>

main()

{
    int n , org=0 , rem , result=0 ;

    printf("\n Enter num = ");
    scanf("%d" , &n); // 153
    org=n;

  while(n!=0)
  {

    rem=n%10; // 3 // 5 // 1

    result+= rem*rem*rem; // 3*3*3 = 27 // 27+125=152 // 152+1=153

    n/=10; // 15 // 1 // 0

}
if(result==org)
{
printf("\n Its an armstrong number");
}

else
{
    printf("\n Its not an armstrong number");
}
}