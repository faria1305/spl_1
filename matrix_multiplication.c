//multiplication  of two matrix
#include<stdio.h>

int main(void)
{
    int row1,col1,row2,col2,i,j,k;

    printf("\nEnter the row and column of the 1st matrix\n");

    scanf("%d%d",&row1,&col1);

    printf("\nEnter the row and column of the 2nd matrix\n");

    scanf("%d%d",&row2,&col2);

    if(col1!=row2)
    {
        printf("Wrong input (Column of 1st matrix and Row of 2nd matrix must have to be same).\n");
        return;
    }




    double matrix1[row1][col1],matrix2[row2][col2],matrix3[row1][col2],sum;




    printf("<-------Enter the elements in the matrix 1-------->\n\n");

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("Element at position matrix1[%d][%d] :",i,j);
            scanf("%lf",&matrix1[i][j]);
        }
    }

    printf("<-------Enter the elements in the matrix 2--------->\n\n");

    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("Element at position matrix2[%d][%d] :",i,j);
            scanf("%lf",&matrix2[i][j]);
        }
    }

    //multiplication of two matrix
    for( i=0; i<row1; i++)
    {
        for( j=0; j<col2; j++)
        {
            sum=0.00;
            for( k=0; k<col1; k++)
            {
                sum=sum+(matrix1[i][k]*matrix2[k][j]);

            }
            matrix3[i][j]=sum;
        }
    }
    printf("\n<------Result of the multiplication of two matrix is----->\n\n");

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("%9.3lf",matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
