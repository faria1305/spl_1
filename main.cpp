#include "header.h"
using namespace std;

int main()
{
      int choice;
     char ch;

     cout<<"Options: "<<endl;
     cout<<"Press '1' for Matrix Addition"<<endl;
     cout<<"Press '2' for Matrix Subtraction."<<endl;
     cout<<"Press '3' for Matrix Multiplication."<<endl;
     cout<<"Press '4' for Transpose Matrix"<<endl;
     cout<<"Press '5' for Determinant of Matrix."<<endl;
     cout<<"Press '6' for Inverse Matrix."<<endl;
     cout<<"press '7' for linear equation solve"<<endl;
    cout<<endl;

        while(1){
        cout<<"Choose an option: ";
        cin>>choice;
        cout<<endl;

        if(choice==1) Matrix_Addition();
        else if(choice==2) Matrix_Subtraction();
        else if(choice==3) Matrix_Multiplication();
        else if(choice==4) Transpose_Matrix();
        else if(choice==5)  Determinant();
        else if(choice==6)  Inverse_Matrix();
        else if(choice==7)
        {   cout<<"press 'a' for Gaussian Elimination Method"<<endl;
            cout<<"press 'b' for Gaussian Jordan  Method"<<endl;
            char c;
            cin>>c;
            if(c=='a')
            GaussianElinination();
            else if (c=='b')
              GaussJordan();
        }
        else cout<<"wrong choice"<<endl;

        cout<<"Do you wish to continue? press 'Y' for Yes : 'N' for No: ";
        cin>>ch;
        if(ch=='N')
            break;
        }


}
