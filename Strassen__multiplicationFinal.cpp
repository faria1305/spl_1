#include<bits/stdc++.h>
#include "header.h"
using namespace std;

void strassen_multiplication_main()
{

    int row1,col1,row2,col2,x,number,maxi=100,mini=1;
    cout<<"enter the first matrix row and coloum"<<endl;
    cin>>row1>>col1;

    cout<<"enter the second matrix row and coloum"<<endl;
    cin>>row2>>col2;
    if(col1!=row2)
    {
        cout<<"matrix multiplication can not possible"<<endl;
        return ;
    }

    else
    {
        double* matrix1[row1];
        for (int i = 0; i < row1; i++)
            matrix1[i] = (double*)malloc(col1 * sizeof(double));

        double* matrix2[row2];
        for (int i = 0; i < row2; i++)
            matrix2[i] = (double*)malloc(col2 * sizeof(double));

        double* result[row1];
        for (int i = 0; i < row1; i++)
            result[i] = (double*)malloc(col2 * sizeof(double));

        cout<<"press '1' for user input"<<endl;
        cout<<"press '2' for random input"<<endl;
        int ch;
        cin>>ch;

        if(ch==1)
        {
            cout<<"Enter 1st matrix"<<endl;
            for(int i=0; i<row1; i++)
            {
                for(int j=0; j<col1; j++)
                {
                    cin>>matrix1[i][j];
                }

            }
            cout<<"Enter 2nd matrix"<<endl;

            for(int i=0; i<row2; i++)
            {
                for(int j=0; j<col2; j++)
                {
                    cin>>matrix2[i][j];
                }

            }
        }
        if(ch==2)
        {
            for (int i = 0; i < row1; i++)
            {
                for (int j = 0; j < col1; j++)
                {
                    x = rand();
                    number=x%(maxi-mini)+mini;

                    matrix1[i][j]=number;
                }
            }

            for (int i = 0; i < row2; i++)
            {
                for (int j = 0; j < col2; j++)
                {
                    x = rand();
                    number=x%(maxi-mini)+mini;
                    matrix2[i][j]=number;

                }


            }


        }



        strassenMultiplication(result, matrix1, matrix2, row1, col1, col2);


        free_matrix(result,col1);
        free_matrix(matrix1,row1);
        free_matrix(matrix2,row2);




    }

}
/*
2 3
3 4
1 2 3
2 3 4
2 3 4 2
2 3 4 3
2 3 4 3
*/




