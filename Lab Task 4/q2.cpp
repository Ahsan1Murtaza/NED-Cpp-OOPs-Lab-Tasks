// 2.	Write a function reverseArray that takes an integer array and its size as arguments and reverses the elements of the array using pointers.

#include<iostream>
using namespace std;

void reverseArr(int *arr, int size){
    int *start = arr;
    int *end = arr + size - 1;
    while(start < end){
        swap(*start,*end);
        start++;
        end--;
    }
}

int main()
{
    const int n = 5;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverseArr(arr,n);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}