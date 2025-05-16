// Calculate the transpose of a given matrix
#include<iostream>
using namespace std;

void TransposeMatrix(int matrix[3][3], int transpose[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            transpose[i][j] = matrix[j][i];
        }
    }
}

int main()
{
    int matrix[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int transpose[3][3];
    
    TransposeMatrix(matrix, transpose);
    cout<<"The transpose of the matrix is: "<<endl;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}