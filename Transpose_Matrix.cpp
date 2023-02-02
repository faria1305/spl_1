
#include "header.h"

void Transpose_Matrix()
{


  cout<<"4. Transpose Matrix "<<endl<<endl;

    int row1,col1;

    cout<<"Enter  matrix row & column: ";
    cin>>row1>>col1;
    cout<<endl;


     double** matrix1=new double*[row1];
    for(int i=0; i<row1; i++) matrix1[i]= new double[col1];

    cout<<"Enter  matrix element : "<<endl;
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<endl;

   double** matrix2=new double*[col1];
    for(int i=0; i<col1; i++) matrix2[i]= new double[row1];

    for(int i=0;i<row1; i++){
        for(int j=0;j<col1;j++){
            matrix2[j][i]=matrix1[i][j];
        }
    }
cout<<"the matrix:"<<endl<<endl;
print_matrix(matrix1, row1, col1);

    delete[] matrix1;

 cout<<"The transpose matrix: "<<endl;
    print_matrix(matrix2, col1, row1);

    delete[] matrix1;
    delete[] matrix2;
}

