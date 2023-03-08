#include<bits/stdc++.h>
#include "header.h"
using namespace std;
//checks if Gauss Jacobi Method is applicable and return true if yes otherwise return false
bool isMethodApplicable(double ** a,int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            if(fabs(a[i][i])>findSum(i,a,n))
                break;
            else
                return false;

        }
    }
    return true;
}
