#include<bits/stdc++.h>
#include "header.h"
using namespace std;

void free_matrix(double **matrix, int row)
{
    for (int i = 0; i < row; i++)
    {
        free(matrix[i]);
    }
}

