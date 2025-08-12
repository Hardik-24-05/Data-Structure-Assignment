#include <iostream>
using namespace std;
int main()
{
    int row;
    int col;
    cout<<"Enter the Number of rows: ";
    cin>>row;
    cout<<"Enter the Number of columns: ";
    cin>>col;
    
        int Matrix[row][col];
        cout<<"Enter the elements for the Matrix."<<endl;

        for(int i = 0;i<row;i++)
        {
            for(int j = 0;j<col;j++)
            {
                cout<<"Enter the value Matrix1 ["<< i+1<<"]["<<j+1<<"]: ";
                cin>>Matrix[i][j];
        
            } 
        }
        cout<<"The Matrix is: "<<endl;
        for(int i =0;i<row;i++)
        {
            for(int j = 0;j<col;j++)
            {
                cout<<Matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        int transpose[col][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = Matrix[i][j];
        }
    }
    cout << "\nTranspose of the matrix:\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

}
    
