#include<bits/stdc++.h>
#include "header.h"
using namespace std;


void strassenMultiplication(double **V, double **m1, double **m2, int row, int k, int col)
{



    // creating square matrices of order 2^n for all and initializing empty cells with 0
    // maximum of row,k,col
    int max_dm, temp, i, j,m,p;
    temp = max(row, k);
    max_dm = max(temp, col);

    if(max_dm && max_dm-1 != 0)
    {
        p = log(max_dm)/log(2);
        m = pow(2,(p+1));

    }

    // int m = (int)pow(2, max_dm);
    double *mat1_updated[m], *mat2_updated[m], *result[m];
    for (i = 0; i < m; i++)
    {
        mat1_updated[i] = (double *)malloc(m * sizeof(double));
    }
    for (i = 0; i < m; i++)
    {
        mat2_updated[i] = (double *)malloc(m * sizeof(double));
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            mat1_updated[i][j] = 0.0;
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            mat2_updated[i][j] = 0.0;
        }
    }

    for (i = 0; i < m; i++)
    {
        result[i] = (double *)malloc(m * sizeof(double));
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < k; j++)
        {
            mat1_updated[i][j] = m1[i][j];
        }
    }
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < col; j++)
        {
            mat2_updated[i][j] = m2[i][j];
        }
    }

    strassen(mat1_updated, mat2_updated, result, m);
    copy_matrix(result, V, row, col);
    print_matrix(V,row,col);



    free_matrix(mat1_updated,m);
    free_matrix(mat2_updated,m);
    free_matrix(result,m);


}

