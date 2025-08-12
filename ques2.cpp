#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number of elements: ";
    cin >> num;

    int arr[100]; 
    cout << "Enter " << num << " elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    int newSize = 0;
    for (int i = 0; i < num; i++) {
        if (i == 0 or arr[i] != arr[i - 1]) {
            arr[newSize++] = arr[i];
        }
    }

    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
