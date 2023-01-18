#include<stdio.h>



int main(void)
{
    int ROW,COLUMN,i,j;
    printf("\nEnter the row and column of the matrices.\n");

    scanf("%d%d",&ROW,&COLUMN);

    double matrix1[ROW][COLUMN],matrix2[ROW][COLUMN],matrix3[ROW][COLUMN];


    printf("<-------Enter the elements in the matrix 1-------->\n\n");

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("Element at position matrix1[%d][%d] :",i,j);
            scanf("%lf",&matrix1[i][j]);
        }
    }

    printf("<-------Enter the elements in the matrix 2--------->\n\n");

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("Element at position matrix2[%d][%d] :",i,j);
            scanf("%lf",&matrix2[i][j]);
        }
    }

    //subtraction of two matrix

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            matrix3[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }

    printf("\n<------Result of the subtract of two matrix is----->\n\n");

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("%9.3lf",matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}








