#include<stdio.h>

int matrix_A[40][40],matrix_B[40][40],matrix_addition[40][40];

void matrix_input(int row, int col)
{

    int i,j;
    printf("Enter the first matrix:\n");

     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d",&matrix_A[i][j]);
    }

    printf("Enter the second matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&matrix_B[i][j]);
    }

    return ;
}

void matrix_Operation(int row, int col)
{

    int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        matrix_addition[i][j]= matrix_A[i][j]+matrix_B[i][j];
    }

    return ;
}

void display(int row, int col)
{
    int i,j;
    printf("The matrix after addition is: \n");

     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        printf("%d ",matrix_addition[i][j]);

        printf("\n");
    }


    return ;
}

int main()
{
    int i,j,row,col;
    printf("Enter the number of row & col\n");

    scanf("%d %d",&row,&col);
    matrix_input(row,col); // taking input for both matrices
    matrix_Operation(row,col); // calling the function for addition
    display(row, col); // showing the result after matrix operation
    return 0;
}
