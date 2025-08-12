#include <iostream>
using namespace std;
int Arr[100];
int num_of_elements = 0;
int run = true;

void Create()
{
    cout<<"Enter the number of elements: ";
    cin>>num_of_elements;
    for(int i = 0;i<num_of_elements;i++)
    {
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>Arr[i];
    }
}
void Display_Array()
{
    if(num_of_elements == 0)
    {
        cout<<"Empty records!"<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"The array is: "<<endl;
        for(int i = 0;i<num_of_elements;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }
}

void Insert_Element()
{
    int Pos;
    int Val;
    cout<<"Enter the position at which you want to insert: ";
    cin>>Pos;
    Pos--;
    cout<<"Enter the Value: ";
    cin>>Val;
    for(int i = num_of_elements;i>Pos;i--)
    {
        Arr[i] = Arr[i-1];

    }
    Arr[Pos]= Val;
    num_of_elements++;
}

void Delete_Element()
{
    int Pos;
    cout<<"Enter the position you want to delete: ";
    cin>>Pos;
    Pos--;
    for(int i = Pos;i<num_of_elements-1;i++)
    {
        Arr[i] = Arr[i+1];
    }
    num_of_elements--;

}
void Linear_search()
{
    int val;
    int found = false;
    cout<<"Enter the element to search: ";
    cin>>val;
    for(int i = 0;i<num_of_elements;i++)
    {
        if (Arr[i] == val)
        {
            cout<<"Element is found at position "<<i+1<<endl;
            found = true;
            break;
        }
    }
    if(found == false)
    {
        cout<<"Element not found"<<endl;
    }

}

void Exit()
{
     run = false;
     
}


int main()
{
    int choice;
  while(run)
  {
    cout<<endl<<"----MENU----"<<endl;
    cout<<"1. Create\n2. Display\n3. Insert\n4. Delete\n5. Linear Search\n6. Exit"<<endl;
    cout<<"Enter Choice: ";
    cin>>choice;
    switch (choice) {
            case 1: Create(); break;
            case 2: Display_Array();  break;
            case 3: Insert_Element(); break;
            case 4: Delete_Element(); break;
            case 5: Linear_search(); break;
            case 6: Exit();
        }
    }
    return 0;
}

