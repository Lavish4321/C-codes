#include <stdio.h>

main()

{
    int i , j , a[3][3] ;

    for(i=0;i<3;i++)
    {
        printf("\n Enter %d row elements = \n" , i+1);

        for(j=0;j<3;j++)
        {
            printf("\n Enter %d%d element = " , i+1,j+1);

            scanf("%d" , &a[i][j]);
        }
    }

printf("\n Elements are = \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d" ,a[i][j]);
        }
        printf("\n");
    }
}