// Check if a matrix is symmetric or not
#include<iostream>
using namespace std;

bool CheckSymmetric(int matrix[3][3], int transpose[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (matrix[i][j] != transpose[i][j]){
                return false;
            }
        }
    }
    return true;
}

void TransposeMatrix(int matrix[3][3], int transpose[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            transpose[i][j] = matrix[j][i];
        }
    }
}

int main()
{
    int matrix[3][3] = {{1,1,-1},{1,2,0},{-1,0,5}};
    int transpose[3][3];
    
    TransposeMatrix(matrix, transpose);
    if (CheckSymmetric(matrix, transpose)){
        cout<<"The matrix is symmetric."<<endl;
    }
    else{
        cout<<"The matrix is not symmetric."<<endl;
    }

    return 0;
}