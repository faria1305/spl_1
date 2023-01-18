//determinant of a matrix

#include<stdio.h>

int main(void)
{
    int ROW,COLOUM,i,j,k;
    printf("\nEnter the order of the matrices.\n");

    scanf("%d%d",&ROW,&COLOUM);

    if(ROW!=COLOUM)
    {

        printf("Matrix determinant can not be possible\n");
        return 0;
    }

    double matrix1[ROW][COLOUM],ratio,det=1.0;


    printf("<-------Enter the elements in the matrix -------->\n\n");

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COLOUM; j++)
        {
            printf("Element at position matrix1[%d][%d] :",i,j);
            scanf("%lf",&matrix1[i][j]);
        }
    }
    // Applying Gauss Elimination
    for(i=0; i< ROW; i++)
    {
        if(matrix1[i][i] == 0.0 && i!=ROW-1)
        {
            printf("Mathematical Error!");
            exit(0);
        }
        for(j=i+1; j<COLOUM; j++)
        {
            ratio = matrix1[j][i]/matrix1[i][i];

            for(k=0; k< ROW; k++)
            {
                matrix1[j][k] = matrix1[j][k] - ratio*matrix1[i][k];
            }
        }
    }

    printf("\nUpper Triangular Matrix: \n");
    for(i=0; i< ROW; i++)
    {
        for(j=0; j< ROW; j++)
        {
            printf("%0.2f\t",matrix1[i][j]);
        }
        printf("\n");
    }
     for(i=0;i< ROW;i++)
     {
         det = det * matrix1[i][i];
     }

      printf("\n\nDeterminant of given matrix is: %0.3f\n", det);

      return 0;
}
