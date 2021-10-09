#include<stdio.h>
int main()
{
    int i,j,a[20][20],b[20][20],c[20][20],rows,cols;
    printf("Enter the number of rows and cols : ");
    scanf("%d %d",&rows,&cols);

    printf("Enter the elements of A matrix:\n");

    //input a matrix
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //input b matrix
    printf("Enter the elements of B matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }


    //output a matrix
        printf("A = ");
    for(i=0; i<rows; i++){
            printf("\t");
        for(j=0; j<cols; j++){
            printf("%d ",a[i][j]);
        }
         printf("\n");
    }

     //printf("Enter the elements of B matrix = \n");


    //output b matrix
         printf("\n B = ");
    for(i=0; i<rows; i++){
             printf("\t");
        for(j=0; j<cols; j++){
            printf("%d ",b[i][j]);
        }
         printf("\n");
    }


    //output c matrix jugh


    for(i=0; i<rows; i++){

          for(j=0; j<cols; j++){
           c[i][j] = a[i][j] + b[i][j];

        }
    }

    // output of C matrix

        printf("\nA + B = ");
    for(i=0; i<rows; i++){

        for(j=0; j<cols; j++){
            printf("%d ",c[i][j]);
        }

         printf("\n");
          printf("\t");
    }



    return 0;
}

