#include <stdio.h>

main()

{
    int i , j , a[2][2] ;

    printf("\n Enter elements = \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }

printf("\n Elements are = \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n%d" ,a[i][j]);
        }
        
    }
}