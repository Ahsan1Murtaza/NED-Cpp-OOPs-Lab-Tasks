#include<iostream>
#include<string>
using namespace std;

int main()
{
    string arr[3] = {"rock", "paper", "scissors"};
    srand(time(0));
    string choice;
    while (true)
    {
        cout << "Rock, Paper, Scissors Game (Type exit for close)\n\n";
        cin>>choice;
        int randomNumber = rand() % 3; // 0 till 2
        if (choice == arr[randomNumber]){
            cout<<"Draw\n";
        }
        else if (choice == "rock" && arr[randomNumber] == "scissors"){
            cout<<"You win\n";
        }
        else if (choice == "rock" && arr[randomNumber] == "paper"){
            cout<<"You lose\n";
        }
        else if (choice == "paper" && arr[randomNumber] == "rock"){
            cout<<"You win\n";
        }
        else if (choice == "paper" && arr[randomNumber] == "scissors"){
            cout<<"You lose\n";
        }
        else if (choice == "scissors" && arr[randomNumber] == "paper"){
            cout<<"You win\n";
        }
        else if (choice == "scissors" && arr[randomNumber] == "rock"){
            cout<<"You lose\n";
        }
        else if (choice == "exit"){
            break;
        }
        else{
            cout<<"Invalid input\n";
        }
       
    }
    
    return 0;
}