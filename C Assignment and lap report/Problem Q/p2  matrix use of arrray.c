#include<stdio.h>
int main()
{
    int first[10][10],sec[10][10],res[10][10],i,j,k,r1,r2,c1,c2;

    printf("Enter rows and cols for first matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and cols for secend matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2){
        printf("Error !! column of first matrix not equal to row of secend\n");

        printf("Enter rows and cols for first matrix : ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and cols for secend matrix : ");
        scanf("%d %d",&r2,&c2);

    }

    //frist matrix
    printf("Enter element for first matrix\n");

    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
                 printf("first[%d][%d] = ",i,j);
                  scanf("%d",&first[i][j]);
        }
    }

    //secnd matrix

        printf("Enter element for secend matrix\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            printf("sec[%d][%d] = ",i,j);
            scanf("%d",&sec[i][j]);
        }
    }

    // output matrix

    //frist matrix
    printf("\n\nfirst matrix\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++)
            printf("%d ",first[i][j]);
            printf("\n");

    }

    //secend matrix output
     printf("\n\nsecend matrix\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++)
            printf("%d ",sec[i][j]);
            printf("\n");

    }





    return 0;
}
