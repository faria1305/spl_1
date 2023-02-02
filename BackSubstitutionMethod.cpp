#include "header.h"

void ApplyBackSubstitution(double ** a,double * value,int n)

{
    int i,j;
    double  sum;
    value[n-1]=a[n-1][n]/a[n-1][n-1];

    for(i=n-2; i>=0; i--)
    {
        sum=0;
        for(j=i+1; j<n; j++)
            sum=sum+a[i][j]*value[j];
        value[i] = (a[i][n]-sum)/a[i][i];
    }
}
