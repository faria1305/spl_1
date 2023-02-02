//inverse of a matrix

#include<bits/stdc++.h>

using namespace std;


void Inverse_Matrix()
{
    int row,col,i,j,k;

cout<< "Enter the order of the matrices"<< endl;
    cin>>row >>col;

    if(row!=col)
    {


       cout<<"Matrix inverse can not be possible"<<endl;

       return;
    }

    double matrix1[row][2*col],rat;


    cout<<"<-------Enter the elements in the matrix -------->"<<endl;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>matrix1[i][j];
        }
    }

    // Augmenting Identity Matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<row; j++)
        {
            if(i==j)
            {
                matrix1[i][j+row] = 1;
            }
            else
            {
                matrix1[i][j+row] = 0;
            }
        }
    }


    //Applying Gauss Jordan Elimination
    for(i=0; i<row; i++)
    {
       if(matrix1[i][i] == 0.0)
       {
           cout<<"determinate is zero inverse can not possible"<<endl;
           exit(0);
        }
        for(j=0; j<row; j++)
        {

            if(i!=j)
            {
                rat = matrix1[j][i]/matrix1[i][i];
                for(k=0; k<2*row; k++)
                {
                    matrix1[j][k] = matrix1[j][k] - rat*matrix1[i][k];
                }
            }
        }
    }

    // Row Operation to Make Principal Diagonal to 1
    for(i=0; i<row; i++)
    {
        for(j=row; j<2*row; j++)
        {
            matrix1[i][j] = matrix1[i][j]/matrix1[i][i];
        }
    }

    // printing Inverse Matrix
    cout<<"Inverse Matrix is:"<<endl;
    for(i=0; i<row; i++)
    {
        for(j=row; j<2*row; j++)
        {

            printf("%9.3f\t",matrix1[i][j]);
        }
        printf("\n");
    }
}
/*
3  3
2 3 6
4 8 5
9 5 2
 */


