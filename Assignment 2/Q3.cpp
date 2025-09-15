#include <iostream>
using namespace std;
int missingbinary(int arr[], int size){
    int left = 0;
    int right = size-1;

    while(left<=right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == mid+1){
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return left + 1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    missingbinary(arr, size);
    return 0;
}

