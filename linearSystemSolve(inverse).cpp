#include<bits/stdc++.h>
#include "header.h"
using namespace std;
void linear_system_solve_inverse()
{
    int n,i,j;
      printf("Enter the number of variables in the system: ");
      scanf("%d", &n);

      double** a=new double*[n];
      for(int i=0; i<n; i++) a[i]= new double[n];

        double** inv=new double*[n];
      for(int i=0; i<n; i++) inv[i]= new double[n];

       double* b=new double [n];//constant of the equation
       double* x=new double [n];//sol of the equation




    printf("Enter the coefficients of the equations:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }


   printf("Enter the constants of the equations:\n");
    for(i=0; i<n; i++)
    {
        printf("b[%d]: ", i);
        scanf("%lf", &b[i]);
    }
     inverse_matrix_sudo(a,inv,n,n);
     // Multiplying inverse matrix with constant vector
    for(i=0; i<n; i++)
    {
        x[i] = 0;
        for(j=0; j<n; j++)
        {
            x[i] += inv[i][j] * b[j];
        }
    }

     printf("The solution of the system is:\n");
    for(i=0; i<n; i++)
    {
        printf("x[%d] = %lf\n", i, x[i]);
    }
    delete[] a;
    delete[] inv;
    delete[] b;
    delete[] x;

}
/*
3
2 3 2
5 1 6
4 6 3
50
40
60
*/



