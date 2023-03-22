#include<bits/stdc++.h>
#include "header.h"
using namespace std;

void cramers ()
{
    int n,ch,ran,number,maxi=100,mini=1;
    double de;
    cout<<"enter the number of variables in the system"<<endl;
    cin>>n;
    double** a=new double*[n];
    for(int i=0; i<n; i++) a[i]= new double[n];

    double** temp=new double*[n];
    for(int i=0; i<n; i++) temp[i]= new double[n];



    double* b=new double [n];//constant of the equation
    double* dete=new double [n];// determinants for x1, x2, ..., xn

    cout<<"press 1 for user input"<<endl;
    cout<<"press 2 for random input"<<endl;
    cin>>ch;

    if(ch==1)
    {
        cout<<"Enter the coefficients of the linear system of equations"<<endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("a[%d][%d]: ", i, j);
                cin>>a[i][j];
            }
            printf("b[%d]: ", i);
            cin>>b[i];
        }

    }

    if(ch==2)
    {
      for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {

                ran= rand();
                number=ran%(maxi-mini)+mini;
                a[i][j]=number;

            }

        }
        for(int i=0; i<n; i++)
        {
            ran= rand();
            number=ran%(maxi-mini)+mini;
            b[i]=number;
        }
    }

    // Calculate the determinant of the coefficient matrix
    de=determenent(a,n,n);

    // Calculate the determinants for x1, x2, ..., xn
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                temp[j][k] = a[j][k];
            }
            temp[j][i] = b[j];
        }
        dete[i]=determenent(temp,n,n);

    }
    // Calculate the solution using Cramer's rule
    printf("Solution:\n");
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = %lf\n", i, dete[i] / de);
    }

    delete[] a;
    delete[] temp;
    delete[] b;
    delete[] dete;


}
/*
3
2  1  1  10
3   2   3  18
1   4   9    16
*/


