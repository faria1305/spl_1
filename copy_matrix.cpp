#include<bits/stdc++.h>
#include "header.h"
using namespace std;

void copy_matrix(double **from, double **to, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            to[i][j] = from[i][j];
        }
    }
}
