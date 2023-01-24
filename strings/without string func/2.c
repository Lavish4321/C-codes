#include <stdio.h>

void print(char arr[]);

int main()
{
   char fname[]= "lavesh";
   char lname[] ="manglani";
   
   print(fname);
   print(lname);
  
}

void print(char arr[])
{
    for(int i=0 ; arr[i]!='\0' ; i++)
    {
        printf("%c" , arr[i]);
    }
    printf(" ");
}