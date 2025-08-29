#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    int n=3;
    cout<<"enter array:";
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        cin>>arr[i][j];
     }
    }


    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        cout<<arr[i][j];
     }
     cout<<endl;
    }


    int rsum=0;
    int csum=0;
    for(int j=0;j<n;j++){
        csum=0;
    for(int i=0;i<n;i++){
        csum+=arr[i][j];
    }
    cout<<"sum of column: "<<j+1<<"is"<<csum<<endl;
    }
    


    for(int j=0;j<n;j++){
        rsum=0;
    for(int i=0;i<n;i++){
        rsum+=arr[j][i];
    }
    cout<<"sum of row: "<<j+1<<"is"<<rsum<<endl;
    }

    return 0;
}