#include<bits/stdc++.h>
#include "header.h"
using namespace std;

void strassen(double **A, double **B, double **C, int n)
{
    if (n == 1)
    {
        C[0][0] = A[0][0] * B[0][0];
        return;
    }
    else
    {
        int divide = (n / 2);
        double *A11[divide], *A12[divide], *A21[divide], *A22[divide];
        double *B11[divide], *B12[divide], *B21[divide], *B22[divide];
        double *C11[divide], *C12[divide], *C21[divide], *C22[divide];
        double *AResult[divide], *BResult[divide];
        double *P1[divide], *P2[divide], *P3[divide], *P4[divide], *P5[divide], *P6[divide], *P7[divide];

        for (int i = 0; i < divide; i++)
        {
            A11[i] = (double *)malloc(divide * sizeof(double));
            A12[i] = (double *)malloc(divide * sizeof(double));
            A21[i] = (double *)malloc(divide * sizeof(double));
            A22[i] = (double *)malloc(divide * sizeof(double));
            B11[i] = (double *)malloc(divide * sizeof(double));
            B12[i] = (double *)malloc(divide * sizeof(double));
            B21[i] = (double *)malloc(divide * sizeof(double));
            B22[i] = (double *)malloc(divide * sizeof(double));
            AResult[i] = (double *)malloc(divide * sizeof(double));
            BResult[i] = (double *)malloc(divide * sizeof(double));
            C11[i] = (double *)malloc(divide * sizeof(double));
            C12[i] = (double *)malloc(divide * sizeof(double));
            C21[i] = (double *)malloc(divide * sizeof(double));
            C22[i] = (double *)malloc(divide * sizeof(double));
            P1[i] = (double *)malloc(divide * sizeof(double));
            P2[i] = (double *)malloc(divide * sizeof(double));
            P3[i] = (double *)malloc(divide * sizeof(double));
            P4[i] = (double *)malloc(divide * sizeof(double));
            P5[i] = (double *)malloc(divide * sizeof(double));
            P6[i] = (double *)malloc(divide * sizeof(double));
            P7[i] = (double *)malloc(divide * sizeof(double));
        }

        for (int i = 0; i < divide; i++)
        {
            for (int j = 0; j < divide; j++)
            {
                A11[i][j] = A[i][j];
                A12[i][j] = A[i][j + divide];
                A21[i][j] = A[i + divide][j];
                A22[i][j] = A[i + divide][j + divide];

                B11[i][j] = B[i][j];
                B12[i][j] = B[i][j + divide];
                B21[i][j] = B[i + divide][j];
                B22[i][j] = B[i + divide][j + divide];
            }
        }
       add_matrix(A11, A22, AResult, divide,divide);   // a11 + a22
        add_matrix(B11, B22, BResult, divide,divide);   // b11 + b22
        strassen(AResult, BResult, P1, divide); // p1 = (a11+a22) * (b11+b22)

        add_matrix(A21, A22, AResult, divide,divide); // a21 + a22
        strassen(AResult, B11, P2, divide);   // p2 = (a21+a22) * (b11)

        subtract_matrix(B12, B22, BResult, divide,divide); // b12 - b22
        strassen(A11, BResult, P3, divide);        // p3 = (a11) * (b12 - b22)

        subtract_matrix(B21, B11, BResult, divide,divide); // b21 - b11
        strassen(A22, BResult, P4, divide);        // p4 = (a22) * (b21 - b11)

      add_matrix(A11, A12, AResult, divide,divide); // a11 + a12
        strassen(AResult, B22, P5, divide);   // p5 = (a11+a12) * (b22)

        subtract_matrix(A21, A11, AResult, divide,divide); // a21 - a11
      add_matrix(B11, B12, BResult, divide,divide);      // b11 + b12
        strassen(AResult, BResult, P6, divide);    // p6 = (a21-a11) * (b11+b12)

        subtract_matrix(A12, A22, AResult, divide,divide); // a12 - a22
       add_matrix(B21, B22, BResult, divide,divide);      // b21 + b22
        strassen(AResult, BResult, P7, divide);    // p7 = (a12-a22) * (b21+b22)

        // calculating c21, c21, c11 e c22:

       add_matrix(P3, P5, C12, divide,divide); // c12 = p3 + p5
       add_matrix(P2, P4, C21, divide,divide); // c21 = p2 + p4

       add_matrix(P1, P4, AResult, divide,divide);       // p1 + p4
       add_matrix(AResult, P7, BResult, divide,divide);  // p1 + p4 + p7
        subtract_matrix(BResult, P5, C11, divide,divide); // c11 = p1 + p4 - p5 + p7

       add_matrix(P1, P3, AResult, divide,divide);       // p1 + p3
       add_matrix(AResult, P6, BResult, divide,divide);  // p1 + p3 + p6
        subtract_matrix(BResult, P2, C22, divide,divide); // c22 = p1 + p3 - p2 + p6

        for (int i = 0; i < divide; i++)
        {
            for (int j = 0; j < divide; j++)
            {
                C[i][j] = C11[i][j];
                C[i][j + divide] = C12[i][j];
                C[i + divide][j] = C21[i][j];
                C[i + divide][j + divide] = C22[i][j];
            }
        }
    }






}
