#include <iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,5,6,7,9};
    int maxi = -3;
    int sum2=0;
    int sum1=0;
    for(int i=0;i<8;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<maxi<<endl;
    for(int i=0;i<=maxi;i++){
        sum1+=i;
    }
    cout<<sum1<<endl;
    for(int i=0;i<8;i++){
        sum2+=arr[i];
    }
    cout<<sum2<<endl;
    cout<<sum1-sum2;
}