#include <iostream>
using namespace std;

int main() {
    int sparse[4][4]={
        {0,10,0,12},
        {0,0,0,0},
        {0,0,5,0},
        {15,12,0,0}
       
    };
        int sparse2[4][4]={
        {0,0,8,0},
        {0,0,0,23},
        {0,0,9,0},
        {20,25,0,0}
    };

    int size=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(sparse[i][j]!=0){
                size++;
            }
        }
    }
    int matrix[size+1][3];
    int k=1;
    matrix[0][0]=4;
    matrix[0][1]=4;
    matrix[0][2]=size;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
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
    matrix2[0][0]=4;
    matrix2[0][1]=4;
    matrix2[0][2]=size;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
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

    int trans[size+1][3];
    trans[0][0]=matrix2[0][1];
    trans[0][1]=matrix2[0][0];
    trans[0][2]=matrix2[0][2];

    k=1;

    for(int j=0;j<4;j++){//j is like the cloumn of the matrix. 
        for(int i=1; i<=size; i++){
            if(matrix2[i][1]==j){ // finding 0 column of matrix which whill be 1st row of transpose
                trans[k][0] = matrix2[i][1]; // swap row & col
                trans[k][1] = matrix2[i][0];
                trans[k][2] = matrix2[i][2];
                k++;
            }
        }
    }

    cout << "\nTranspose Triplet Matrix:\n";
    for(int i=0;i<size+1;i++){
        for(int j=0;j<3;j++){
            cout<<trans[i][j]<<"  ";
        }
        cout<<endl;
    }


    //multiply
    int result[50][3];  // keep size large enough
    int r = 1; // result index
    result[0][0] = matrix[0][0];   // rows = A.rows
    result[0][1] = trans[0][0];    // cols = B.cols
    result[0][2] = 0;              // will update count later


    // Multiply A (matrix) with B^T (trans)
    for(int i = 0; i < matrix[0][0]; i++) {   // loop rows of A
        for(int j = 0; j < trans[0][0]; j++) { // loop rows of B^T (i.e. cols of B)
            int sum = 0;

        // go through A's row
        for(int a = 1; a <= matrix[0][2]; a++) {
            if(matrix[a][0] == i) {  // belongs to row i of A
                // go through B^T's row (which is column of B)
                for(int b = 1; b <= trans[0][2]; b++) {
                    if(trans[b][0] == j && trans[b][1] == matrix[a][1]) {
                        sum += matrix[a][2] * trans[b][2];
                    }
                }
            }
        }

        if(sum != 0) {
            result[r][0] = i;
            result[r][1] = j;
            result[r][2] = sum;
            r++;
        }
    }
}
    result[0][2] = r-1;  // update non-zero count

    // Print result
    cout << "\nResult (A x B):\n";
    for(int i=0; i<r; i++) {
        for(int j=0; j<3; j++) {
            cout << result[i][j] << "  ";
        }
        cout << endl;
    }






    return 0;
}