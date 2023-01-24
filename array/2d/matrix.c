#include <stdio.h>

main()

{
    int i , j , m , n ;


    printf("\n Enter number of rows = ");
    scanf("%d" , &m);

    printf("\n Enter number of columns = ");
    scanf("%d" , &n);

    int a[m][n];
    
    for(i=0;i<m;i++)
    {
        printf("\n Enter %d row elements = \n" , i+1);

        for(j=0;j<n;j++)
        {
            printf("\n Enter %d%d element = " , i+1,j+1);

            scanf("%d" , &a[i][j]);
        }
    }

printf("\n Elements are = \n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d" ,a[i][j]);
        }
        printf("\n");
    }

}