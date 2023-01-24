#include <stdio.h>

void main()

{
    char ch ;

    printf("\n Enter any character = ");

    scanf("%c" , &ch);

 if ( isupper(ch)) 
   {  
    printf("\n %c " , tolower(ch));
   }

else if (islower(ch)) 
 
   {
    printf("\n %c" , toupper(ch));
   }

else    

{
    printf(" Its other character");
}

}