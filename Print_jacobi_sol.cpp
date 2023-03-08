#include<bits/stdc++.h>
#include "header.h"
using namespace std;

//prints the Value of Unknowns
void print(int iteration,double * values,int n)
{
    cout<<"Iteration "<<iteration<< ": ";
    for(int i=0; i<n; i++)
        cout<<"value["<<i+1<<"]= "<<values[i]<<" ";
    cout<<endl;
}
