#include<bits/stdc++.h>
#include "header.h"
using namespace std;
#define EPSILON 0.001  // till 3 correct decimal places


void findValuesJacobi(double **a,int maxIterations,double * values_old,int n)
{
    int i,j,k,iteration,flag=0;
    float sum=0;
    double * values_new=new double [n];
    for(iteration=1; iteration<=maxIterations; iteration++)
    {
        for(i=0; i<n; i++)
        {
            sum=0;
            for(j=0; j<n; j++)
            {
                if(i!=j)
                    sum+=a[i][j]*values_old[j];
            }
            values_new[i]=(a[i][n] - sum)/a[i][i];
        }

        //Now you have found the values of n unknowns for above iteration
        //Now check if your matching criteria satisfied , comparing with previous iteration values
        for(k=0; k<n; k++)
        {
            if(fabs(values_old[k]-values_new[k])<=EPSILON)
                continue;
            else
            {
                flag=1;
                break;
            }

        }
        if(flag==0)
        {
            print(iteration,values_new,n);  // print final values of unknowns  and return
            return ;
        }
        flag=0; //resetting the flag

        print(iteration,values_new,n); //To print intermediate values of unknowns

        //copy new values of unknowns to old value array
        for(k=0; k<n; k++)
            values_old[k]=values_new[k];

    } //end of iteration loop
    print(iteration,values_new,n) ;
  delete[] values_new;

} //end of findValuesJacobi()

