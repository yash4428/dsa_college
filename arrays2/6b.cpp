#include <iostream>
using namespace std;

int main() {
    int sparse[6][6]={
        {15,0,0,22,0,-15},
        {0,11,3,0,0,0},
        {0,0,0,-6,0,0},
        {0,0,0,0,0,0},
        {91,0,0,0,0,0},
        {0,0,28,0,0,0}
    };
        int sparse2[6][6]={
        {15,0,0,0,91,0},
        {0,11,0,0,0,0},
        {0,3,0,0,0,28},
        {22,0,-6,0,0,0},
        {0,0,0,0,0,0},
        {-15,0,0,0,0,0}
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

    cout<<endl<<"first matrix:"<<endl;
    for(int i=0;i<size+1;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }



    int matrix2[size+1][3];
    k=1;
    matrix2[0][0]=6;
    matrix2[0][1]=6;
    matrix2[0][2]=size;

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(sparse2[i][j]!=0){
                matrix2[k][0]=i;
                matrix2[k][1]=j;
                matrix2[k][2]=sparse2[i][j];
                k++;
            }
        }
    }

    cout<<endl<<"second matrix:"<<endl;
    for(int i=0;i<size+1;i++){
        for(int j=0;j<3;j++){
            cout<<matrix2[i][j]<<"  ";
        }
        cout<<endl;
    }



    int add[20][3];
    add[0][0]=6;
    add[0][1]=6;

    int i=1,j=1,y=1;
    
    while(i<=matrix[0][2] && j<=matrix2[0][2]){
        if(matrix[i][0]<matrix2[j][0]||(matrix[i][0]==matrix2[j][0]&& matrix[i][1]<matrix2[j][1])){
            add[y][0]=matrix[i][0];
            add[y][1]=matrix[i][1];
            add[y][2]=matrix[i][2];
            y++;i++;
        }
        else if(matrix[i][0]>matrix2[j][0]||(matrix[i][0]==matrix2[j][0]&& matrix[i][1]>matrix2[j][1])){
            add[y][0]=matrix2[j][0];
            add[y][1]=matrix2[j][1];
            add[y][2]=matrix2[j][2];
            y++;j++;
        }
        else{//same position
           int sum= matrix[i][2]+matrix2[j][2];
           if(sum!=0){
            add[y][0]=matrix[i][0];
            add[y][1]=matrix[i][1];
            add[y][2]=sum;
            y++;
           }
           i++;j++;
        }
    }
    // Copy remaining matrix elements (if any)
    while(i<=matrix[0][2]) {
        add[y][0] = matrix[i][0];
        add[y][1] = matrix[i][1];
        add[y][2] = matrix[i][2];
        i++; y++;
    }

    //one of these will execute

    //copy left over matrix 2
     while(j<=matrix2[0][2]) {
        add[y][0] = matrix2[j][0];
        add[y][1] = matrix2[j][1];
        add[y][2] = matrix2[j][2];
        j++; y++;
    }


  add[0][2]=y-1;
  cout<<endl<<"addition:"<<endl;
    for(int i=0;i<y;i++){
        for(int j=0;j<3;j++){
            cout<<add[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}