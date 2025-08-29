#include <iostream>
using namespace std;
#define MAX 5

int main() {
    int i,j,k=0;
    int a[MAX];
    cout<<"enter elements"<<endl;
    for(i=0;i<MAX;i++){
        cin>>a[i];
    }
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            if(j==i){
                cout<<a[k]<<" ";
                k++;
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}