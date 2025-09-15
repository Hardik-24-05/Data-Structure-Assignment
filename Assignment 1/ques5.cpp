#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols]; 

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        {
            cout<<"Enter the ["<<i+1<<"]["<<j+1<<"] element: ";
            cin >> arr[i][j];
        }
    }
    cout<<endl;
    cout<<"The array is: "<<endl;
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    cout <<"Sum of each row: "<<endl;;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

   
    cout << "\nSum of each column:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}
