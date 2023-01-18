//transpose of a matrix
#include<stdio.h>
int main(void)
{
    int ROW,COLUMN,i,j;
    printf("\nEnter the row and column of the matrices.\n");

    scanf("%d%d",&ROW,&COLUMN);

    double matrix1[ROW][COLUMN],matrix2[COLUMN][ROW];


    printf("<-------Enter the elements in the matrix -------->\n\n");

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("Element at position matrix1[%d][%d] :",i,j);
            scanf("%lf",&matrix1[i][j]);
        }
    }
    //print matrix
     printf("\n<------the  matrix is----->\n\n");
       for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("%9.3lf",matrix1[i][j]);
        }
        printf("\n");
    }

    //transpose of the matrix

      for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            matrix2[j][i]=matrix1[i][j];
        }
    }
 printf("\n<------the transpose of the matrix is----->\n\n");
   for(i=0; i<COLUMN; i++)
    {
        for(j=0; j<ROW; j++)
        {
            printf("%9.3lf",matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;
}

