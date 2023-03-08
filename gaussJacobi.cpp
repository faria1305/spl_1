#include<bits/stdc++.h>
#include "header.h"
using namespace std;

int  linear_system_solve_gaussJacobi()

{
     int i,j,k,x,y,maxIterations,n,ch,ran,number,maxi=100,mini=1;

    cout<<"Enter no of Unknowns\n";
    cin>>n;

    cout<<"Enter no. of iterations\n";
    cin>>maxIterations;



    double ** a =new double *[n];
    for(int i=0; i<n; i++) a[i]=new double [n+1];


    double* values=new double [n];
    cout<<"press 1 for user input"<<endl;
    cout<<"press 2 for random input"<<endl;
    cin>>ch;

    if(ch==1)
    {
        cout<<"Enter the Augmented Matrix"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n+1; j++)
                cin>>a[i][j];
        }

    }

    if(ch==2)
    {

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n+1; j++)
            {

                ran= rand();
                number=ran%(maxi-mini)+mini;
                a[i][j]=number;

            }

        }

    }

    if(!isMethodApplicable(a,n))
    {
        cout<<"\nGauss Jacobi Method can't be applied"<<endl;
        return 0;
    }
    cout<<"\nGauss Jacobi Method is applicable\n\n";
    for(int i=0; i<n; i++)
        values[i]=0;
    findValuesJacobi(a,maxIterations,values,n);
    delete[] a;
    delete[] values;
     return 0;

}
