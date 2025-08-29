#include <iostream>
using namespace std;

int main() {
    int sparse[6][6]={
        {15,0,0,22,0,15},
        {0,11,3,0,0,0},
        {0,0,0,6,0,0},
        {0,0,0,0,0,0},
        {91,0,0,0,0,0},
        {0,0,28,0,0,0}
    };

    int size=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(sparse[i][j]!=0){
                size++;
            }
        }
    }
    int matrix[size+1][3];
    int k=1;
    matrix[0][0]=6;
    matrix[0][1]=6;
    matrix[0][2]=size;

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(sparse[i][j]!=0){
                matrix[k][0]=i;
                matrix[k][1]=j;
                matrix[k][2]=sparse[i][j];
                k++;
            }
        }
    }

    for(int i=0;i<size+1;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}