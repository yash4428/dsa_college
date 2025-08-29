#include <iostream>
using namespace std;

int main() {
    int arr[98]={1,2,3,4,5,6,7,8,9};
    int l=0;
    int h = (sizeof(arr) / sizeof(arr[0]))-1;
    int x=6;

    while(l<=h){
        int mid= (l+h)/2;
        if(arr[mid]==x){
            cout<<"position is:"<<mid+1;
        }
        if(arr[mid]<x){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }

    return 0;
}