#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int num_of_elements;
    cout<<"Enter the Number of elements: ";
    cin>>num_of_elements;
    for(int i = 0;i<num_of_elements;i++)
    {
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }

    cout<<"The array is: ";

    for(int i = 0;i<num_of_elements;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i = 0;i<num_of_elements/2;i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[num_of_elements - 1 - i];
        arr[num_of_elements - 1 -i] = temp;

    }
    cout<<endl;
    cout<<"Reversed array is: ";
    for(int i = 0;i<num_of_elements;i++)
    {
        cout<<arr[i]<<" ";
    }

    
}