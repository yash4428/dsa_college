#include <iostream>
using namespace std;

void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

int main() {
    int a[] = {64,34,25,12,22,11,90};
    int size = sizeof(a) / sizeof(a[0]);
    bubble(a,size);


    for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
    return 0;
} 