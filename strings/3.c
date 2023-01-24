#include <stdio.h>
#include <string.h>

int main() 
{
   char s1[100] , s2[100] , s3[]=" is a friend of ";
   
   printf("Enter name of friend 1 = ");
   gets(s1);
   
   printf("Enter name of friend 2 = ");
   gets(s2);
   
   strcat(s1,s3);
   strcat(s1,s2);
   
   puts(s1);
}