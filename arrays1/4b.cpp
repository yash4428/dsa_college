#include <iostream>
using namespace std;

int main() {
     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     int result[3][3]={0};


       for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}