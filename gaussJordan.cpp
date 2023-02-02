// Program to Implement Gauss Jordan Method
#include<bits/stdc++.h>
using namespace std;

int n;
//Converts the Augmented matrix to Diagonal form
void convertToDiagonal(double ** a,int n)

{
   int i,j,x,y,k;
    double rat;
    for( i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j!=i)
            {
                rat=a[j][i]/a[i][i];
                for(k=0; k<n+1; k++)
                    a[j][k]=a[j][k] -( rat * a[i][k]);

                //print the Matrix after changed row (Intermediate forms)

                printf("Intermediate forms:\n");
                for( x=0; x<n; x++)
                {
                    for(y=0; y<n+1; y++)
                        printf("%.2f ",a[x][y]);
                    printf("\n");
                }
                printf("\n");

            }
        }
    }
}

//prints the Value of Unknowns
void printUnknowns(double ** a,int n)
{
   int i;
   printf("Values of unknowns are:\n");
   for(i=0;i<n;i++)
      printf("Value[%d]=%lf\n",i,a[i][n]/a[i][i]);

}
int main()
{
    int i,j,k,x,y;
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
    return 0;
}
/*
3
1  1  1  9
2  -3  4  13
3   4   5   40
*/
