#include"header.h"

//Converts the Augmented matrix to Diagonal form
void convertToDiagonal(double ** a,int n)

{
   int i,j,x,y,k;
    double rat;
    for( i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j!=i)
            {
                rat=a[j][i]/a[i][i];
                for(k=0; k<n+1; k++)
                    a[j][k]=a[j][k] -( rat * a[i][k]);

                //print the Matrix after changed row (Intermediate forms)

                printf("Intermediate forms:\n");
                for( x=0; x<n; x++)
                {
                    for(y=0; y<n+1; y++)
                        printf("%.2f ",a[x][y]);
                    printf("\n");
                }
                printf("\n");

            }
        }
    }
}
