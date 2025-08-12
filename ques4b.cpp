#include <iostream>
using namespace std;
int main()
{
    int row1;
    int col1;
    int row2;
    int col2;
    cout<<"Enter Row and Column for first Matrix: ";
    cin>>row1>>col1;
    cout<<"Enter Row and Column for second Matrix: ";
    cin>>row2>>col2;
    if(col1!= row2)
    {
        cout<<"Multiplication is not possible [Column1 not equal to Row2]"<<endl;
    }
    else{

    int Matrix1[row1][col1];
    int Matrix2[row2][col2];
    
    cout<<"Enter the elements for the first Matrix."<<endl;
    for(int i = 0;i<row1;i++)
    {
        for(int j = 0;j<col1;j++)
        {
            cout<<"Enter the value Matrix1 ["<< i+1<<"]["<<j+1<<"]: ";
            cin>>Matrix1[i][j];
        
    }
    }
    
    cout<<endl;
    cout<<"Enter the elements for the second Matrix."<<endl;
    for(int i = 0;i<row2;i++)
    {
        for(int j = 0;j<col2;j++)
        {
            cout<<"Enter the value Matrix2 ["<< i+1<<"]["<<j+1<<"]: ";
            cin>>Matrix2[i][j];
        
    }
    }
    int Matrix3[row1][col2] = {0};
    for(int i =0;i<row1;i++)
    {
        for(int j = 0;j<col2;j++)
        {
            Matrix3[i][j] = 0;
            for(int k = 0;k<col1;k++)
            {
                Matrix3[i][j] += Matrix1[i][k] * Matrix2[k][j]; 
            }
        }

    }
    cout<<endl;
    cout<<"The resultant Matrix is: "<<endl;
    for(int i = 0;i<row1;i++)
    {
        for(int j = 0;j<col2;j++)
        {
            cout<<Matrix3[i][j]<<" ";
        }
        cout<<endl;
    }

}
}