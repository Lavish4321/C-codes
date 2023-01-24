#include <stdio.h>

int main()
{
   char fname[]= "lavesh";
   char lname[] = "manglani";
   
   for(int i=0; fname[i]!='\0' ; i++)
   {
       printf("%c" , fname[i]);
   }
}