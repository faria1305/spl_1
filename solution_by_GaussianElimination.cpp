// Program to Implement Gauss Elimination Method
#include<bits/stdc++.h>
#include "header.h"
using namespace std;

int n;


//prints the Value of Unknowns
void print(double  value[],int n)
{
    int i;

    cout<<"Values of unknowns are:"<<endl;
    for(i=0; i<n; i++)
        printf("Value[%d]=%lf\n",i,value[i]);

}


void GaussianElinination()
{
    int i,j,k,x,y;
    double sum,rat;
    cout<<"Enter no of Unknowns"<<endl;
    cin>>n;
    double ** a =new double *[n];
    for(int i=0; i<n; i++) a[i]=new double [n+1];
    double *  value=new double [n];


    cout<<"Enter the Augmented Matrix"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n+1; j++)
            cin>>a[i][j];
    }
    convertToUpperTriangular(a,n);
    ApplyBackSubstitution(a,value,n);
    print(value,n);
    delete[] a;
    delete[] value;
}
/*
3
2  1  1  10
3   2   3  18
1   4   9    16
*/

