
#include <stdio.h>
int main()
{
    int matrix[10][10],p,q,transpose_matrix[10][10];
    printf("Enter rows and columns : ");
    scanf("%d %d", &p, &q);

    printf("\nEnter elements of matrix :\n");
    for(int i = 0; i < p; i++)
        for (int j = 0; j < q; j++) {
            scanf("%d", &matrix[i][j]);
        }

/***printf("\nMatrix : \n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++) {
            printf("%d  ", matrix[i][j]);
            if (j == q - 1)
                printf("\n");
        } */

    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++) {
            transpose_matrix[j][i] = matrix[i][j];
        }

    printf("\nChange of every row and column matrix :\n");
    for (int i = 0; i < q; i++)
        for (int j = 0; j < p; j++) {
            printf("%d  ", transpose_matrix[i][j]);
            if (j == p - 1)
                printf("\n");
        }
    return 0;
}
