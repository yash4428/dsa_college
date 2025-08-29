#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5,5,2,3,8,6,7,8,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count =size;

    for (int i = 0; i<size; i++) {
        
        for(int j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                count--;
               break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}