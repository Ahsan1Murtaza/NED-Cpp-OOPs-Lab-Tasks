// Multiply two matrices and print the result
#include<iostream>
using namespace std;

int main()
{
    int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int ans[3][3] = {0};

    // Multiply matrix
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                ans[i][j] = ans[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // displaying
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << ans[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}