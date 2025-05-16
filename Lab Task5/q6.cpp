// Question     Reverse the elements of a given vector without using 
// the reverse() function.
//  Example Input: {1, 2, 3, 4, 5}
//  Output: {5, 4, 3, 2, 1}

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> input){
    int start = 0;
    int end = input.size() - 1;
    while (start < end){
        swap(input[start], input[end]);
        start++;
        end--;
    }
    return input;
}
int main()
{
    vector<int> input = {1, 2, 3, 4, 5};
    input = reverse(input);

    // displaying reverse answer
    for (int i = 0; i < input.size(); i++){
        cout << input[i] << " ";
    }
    return 0;
}