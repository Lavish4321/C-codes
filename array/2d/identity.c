#include <stdio.h>

main()

{
    int i , j , n ;


    printf("\n Enter the order of identity matrix = ");
    scanf("%d" , &n);

    int a[n][n];
    
    for(i=0;i<n;i++)
    {
        printf("\n Enter %d row elements = \n" , i+1);

        for(j=0;j<n;j++)
        {
            printf("\n Enter %d%d element = " , i+1,j+1);

            scanf("%d" , &a[i][j]);
        }
    }

printf("\n Elements are = \n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
            printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }

}