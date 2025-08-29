#include <iostream>
using namespace std;
#define MAX 5

int main() {
    int i,j,k=0;
    int size=(MAX*(MAX+1))/2;
    int a[size];
    cout<<"enter elements"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            if(i>=j){
                cout<<a[k]<<" ";
                k++;
            }
            else{
                int index= (j*(j+1))/2 + i;
                cout<<a[index]<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}