
// Program to Implement Gauss Jordan Method
#include<bits/stdc++.h>
#include "header.h"
using namespace std;


//prints the Value of Unknowns
void printUnknowns(double ** a,int n)
{
   int i;
   printf("Values of unknowns are:\n");
   for(i=0;i<n;i++)
      printf("Value[%d]=%lf\n",i,a[i][n]/a[i][i]);

}


void GaussJordan()
{
    int i,j,k,x,y,n;
    double rat;
    cout<<"Enter no of Unknowns"<<endl;
    cin>>n;
    double ** a =new double *[n];
    for(int i=0; i<n; i++) a[i]=new double [n+1];

       cout<<"Enter the Augmented Matrix"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n+1; j++)
            cin>>a[i][j];
    }
    convertToDiagonal(a,n);
    printUnknowns(a,n);

}
/*
3
1  1  1  9
2  -3  4  13
3   4   5   40
*/
