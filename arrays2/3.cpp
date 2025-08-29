#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,6};
    int length=5;
    int miss=0;
    for(int i=0;i<length;i++){
            if((i+1<length) &&(arr[i]+1)!=arr[i+1]){
                miss=arr[i]+1;
        }
    }
    cout<<miss;
    return 0;
}
