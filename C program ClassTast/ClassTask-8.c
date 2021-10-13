#include<stdio.h>

int matrix[40][40];

void matrix_input(int row, int col)
{

    int i,j;
    printf("Enter the matrix:\n");

     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d",&matrix[i][j]);
    }

    return ;
}

float find_average(int row, int col)
{

    int i,j;
    float avg;
    int sum=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        sum+=matrix[i][j];
    }

    avg= sum/(float)(row*col);

    return avg;
}

int main()
{
    int i,j,row,col;
    printf("Enter the number of row & col\n");

    scanf("%d %d",&row,&col);
    matrix_input(row,col); // taking input for both matrices

    float ret= find_average(row,col);//finding the average for whole matrix

    printf("The average of all elements: %f\n",ret);

    return 0;
}



