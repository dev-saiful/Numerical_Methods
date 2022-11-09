#include<bits/stdc++.h>
using namespace std;
int main()
{
    int col,row,matrixNum;

    cout << "Enter Column: ";
    cin>>col;
    cout << "Enter Row: ";
    cin>>row;
    int arr[col][row];
    int arr2[col][row];
    int AddMat[col][row];
    int SubMat[col][row];
    int MulMat[col][row];
    int DivMat[col][row];
    cout << "First Matrix" <<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cin>>arr[i][j];
        }
    }
     cout << "Second Matrix"<<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout << "........................."<<endl;
    cout << "First Matrix" <<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
     cout << "Second Matrix"<<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout << arr2[i][j] <<" ";
        }
        cout << endl;
    }
    cout << "Operation>>>>>>>>>>>>>>>>>>> Matrix"<<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            AddMat[i][j]=arr[i][j]+arr2[i][j];
            SubMat[i][j]=arr[i][j]-arr2[i][j];

        }
        cout << endl;
    }

    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            MulMat[i][j]=0;
             for (int k = 0; k < col; k++) {
                MulMat[i][j] += arr[i][k] * arr2[k][j];
            }

        }
        cout << endl;
    }

    cout << "New>>>>>>>>>>>>>>>>>>> Matrix"<<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            //cout<<AddMat[i][j]<<" ";
            //cout<<SubMat[i][j]<<" ";
            cout<<MulMat[i][j]<<" ";
        }
        cout << endl;
    }


}
