//inverse of a matrix

#include<stdio.h>

int main(void)
{
    int ROW,COLOUM,i,j,k;
    printf("\nEnter the order of the matrices.\n");

    scanf("%d%d",&ROW,&COLOUM);

    if(ROW!=COLOUM)
    {

        printf("Matrix inverse can not be possible\n");

        return 0;
    }

    double matrix1[ROW][2*COLOUM],ratio;


    printf("<-------Enter the elements in the matrix -------->\n\n");

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLOUM; j++)
        {
            printf("Element at position matrix1[%d][%d] :",i,j);
            scanf("%lf",&matrix1[i][j]);
        }
    }

    // Augmenting Identity Matrix
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<ROW; j++)
        {
            if(i==j)
            {
                matrix1[i][j+ROW] = 1;
            }
            else
            {
                matrix1[i][j+ROW] = 0;
            }
        }
    }




    //Applying Gauss Jordan Elimination
    for(i=0; i<ROW; i++)
    {
       if(matrix1[i][i] == 0.0)
       {
           printf("Mathematical Error!");
           exit(0);
        }
        for(j=0; j<ROW; j++)
        {

            if(i!=j)
            {
                ratio = matrix1[j][i]/matrix1[i][i];
                for(k=0; k<2*ROW; k++)
                {
                    matrix1[j][k] = matrix1[j][k] - ratio*matrix1[i][k];
                }
            }
        }
    }

    // Row Operation to Make Principal Diagonal to 1
    for(i=0; i<ROW; i++)
    {
        for(j=ROW; j<2*ROW; j++)
        {
            matrix1[i][j] = matrix1[i][j]/matrix1[i][i];
        }
    }

    // printing Inverse Matrix
    printf("\nInverse Matrix is:\n");
    for(i=0; i<ROW; i++)
    {
        for(j=ROW; j<2*ROW; j++)
        {

            printf("%9.3f\t",matrix1[i][j]);
        }
        printf("\n");
    }
    return 0;
}

