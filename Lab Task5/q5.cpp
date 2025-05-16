// Question:Find the largest element in each row of a matrix.

#include<iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int largestElement;

    for (int i = 0; i < 3; i++){
        largestElement = matrix[i][0];
        for (int j = 1; j < 3; j++){
            if (matrix[i][j] > largestElement){
                largestElement = matrix[i][j];
            }
        }
        cout << "The largest Element in Row " << i + 1 << " is " << largestElement << endl;
    }

    return 0;
}