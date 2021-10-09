#include<stdio.h>


int main()
{

    int matrix_A[4][4],matrix_B[4][4],matrix_addition[4][4];
    int i,j;

    printf("Enter the first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&matrix_A[i][j]);
    }
    printf("Enter the second matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&matrix_B[i][j]);
    }


     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        matrix_addition[i][j]= matrix_A[i][j]+matrix_B[i][j];
    }

    printf("The matrix after addition is: \n");

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",matrix_addition[i][j]);

        printf("\n");
    }

    return 0;

}
