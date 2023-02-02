#include<bits/stdc++.h>
using namespace std;

void Matrix_Addition();
void Matrix_Subtraction();
void Matrix_Multiplication();
void Transpose_Matrix();
void Determinant();
void Inverse_Matrix();
void GaussianElinination();
void GaussJordan();

void add_matrix(double **mat1, double **mat2, double **add_mat, int r, int c);
void subtract_matrix(double **mat1, double **mat2, double **subtract_mat, int r, int c);
void multiply_matrix(double **mat1, double **mat2, double **res, int r1, int c, int c2);
void print_matrix(double **mat, int row, int col);
double determenent(double **res, int r, int c);
void sub_matrix_initializer(double **mat, double **sub_mat, int r, int c, int r1, int c1);
void ApplyBackSubstitution(double ** a,double * value,int n);
void convertToUpperTriangular(double ** a,int n);
void convertToDiagonal(double ** a,int n);
