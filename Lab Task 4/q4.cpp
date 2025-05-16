// 4.	Write a function removeDuplicates that takes an integer array and its size as arguments and removes duplicates, keeping only the first occurrence of each element.
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

void removeDuplicates(int arr[], int size){
    int temp[size];
    int index = 0;
    for (int i = 0; i < size; i++){
        bool find = false;
        for (int j = 0; j < index; j++){
            if (arr[i] == temp[j]){
                find = true;
            }
        }

        if (!find){
            temp[index++] = arr[i];
        }
    }

    // Print result
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < index; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
}


int main()
{
    int arr[5] = {1,2,2,3,2};
    // int size = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, 5);
    return 0;
}