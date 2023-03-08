#include<bits/stdc++.h>
#include "header.h"
using namespace std;

float findSum(int i,double **a,int n)
{
    float sum=0;
    for(int j=0; j<n; j++)
    {
        if(i!=j)
            sum+=a[i][j];
    }
    return sum;
}
