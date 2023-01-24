#include <stdio.h>
#include <string.h>

main()

{
    char str1[]="lavesh";// "" automatically takes the null character '\0' in the end of the string

    char str2[]={'a','n','s','h','\0'};
    char str3[100];

    printf("Length of str1 is %d \n" , strlen(str1));
    printf("Length of str2 is %d \n" , strlen(str2));

    strcat(str1,str2);
    
    strcpy(str3,str1);
    puts(str3);
}