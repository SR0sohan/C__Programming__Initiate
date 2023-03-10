#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m ,n ,sum =0;
    int a[3][4],b[4][2],result[3][2];
    // taking input
    printf("Enter the first metrix.\n");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0;j < 4; j++)
       {
        // printf("Enter the %d %d element of first matrix\n",i,j);
        scanf("%d",&a[i][j]);
       }
       
    }
    // taking input

    printf("Enter the second metrix.\n");

    for (int i = 0; i < 4; i++)
    {
       for (int j = 0;j < 2; j++)
       {
        // printf("Enter the %d %d element of first matrix\n",i,j);
        scanf("%d",&b[i][j]);
       }
       
    }

    // calculate the result
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0;j < 2; j++)
       {
        for (int k = 0; k < 4; k++)
        {
            sum += a[i][k] * b[k][j];
        }
        result[i][j] = sum;
        sum =0;
       }
       
    }
    // print the result matrix
    printf("Matrix multiplication result:\n");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0;j < 2; j++)
       {
        printf("%d\t",result[i][j]);
       }
       printf("\n");
       
    }
    
    return 0;
}