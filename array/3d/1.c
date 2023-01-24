#include <stdio.h>

main()

{
    int i , j , k , a[2][2][2] ;

    printf("\n Enter elements = \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
            scanf("%d" , &a[i][j][k]);
            }       
        }
    }

printf("\n Elements are = \n");

   for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
            printf("\n %d" , a[i][j][k]);
            }       
        }
    }
}