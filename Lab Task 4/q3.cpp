// 3.	Write a function findMax that takes an integer array and its size as arguments and returns a pointer to the maximum element in the array.
#include<iostream>
using namespace std;

void findMax(int *arr, int size){
    int *max = arr;
    int *start = arr;
    int *end = arr + size - 1;
    while(start <= end){
        if (*max < *start){
            max = start;
        }
        start++;
    }
    cout<< "Max Element is "<<*max <<" " << &max;
}

int main()
{
    const int n = 5;
    int arr[n] = {7,1,2,3,4};
    findMax(arr, n);


    return 0;
}