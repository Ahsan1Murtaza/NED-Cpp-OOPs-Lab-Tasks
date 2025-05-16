// 5.	Write a function isPalindrome that takes a string as an argument and returns true if the string is a palindrome, false otherwise. Use pointers to check for palindrome.

#include<iostream>
#include<string>
using namespace std;

bool check(string s){
    char *start = &s[0];
    char *end = &s[s.length() - 1];

    while (start < end){
        if (*start != *end){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string s = "mam";
    s = "MADAM";
    if(check(s)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    return 0;
}