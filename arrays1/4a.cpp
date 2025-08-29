#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int n=5;
    cout<<"enter array:";
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }

    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

    for(int i=0;i<n;i++){
     cout<<arr[i];
    }

 
    return 0;
}