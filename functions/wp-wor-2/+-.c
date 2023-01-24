#include <stdio.h>

void add(int a,int b)

{
    printf("\n Addition = %d" , a+b);
}

void sub(int a,int b)

{
    printf("\n Sub  = %d" , a-b);
}

void main ()

{
    int a,b;
    
    printf("Enter value of a=");
    scanf("%d" , &a);
    
    printf("Enter value of b=");
    scanf("%d" , &b);

add(a,b);
sub(a,b);

}
