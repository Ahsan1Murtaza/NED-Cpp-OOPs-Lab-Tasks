// Question 5: Animal Sound Simulation

// Problem Statement:
// Create an abstract class Animal with a pure virtual function makeSound(). Derive two classes Dog and Cat from Animal. Implement the makeSound() function in both derived classes. Write a program to simulate the sounds of a dog and a cat.

#include <iostream>
#include <string>
using namespace std;
// Abstract class Animal
class Animal {
public:
    // Pure virtual function for making sound
    virtual void makeSound() = 0;
};
// Derived class Dog
class Dog : public Animal {
public:
    // Implementing makeSound() function for Dog
    void makeSound() override {
        cout << "Woof! Woof!" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Implementing makeSound() function for Cat
    void makeSound() override {
        cout << "Meow! Meow!" << endl;
    }
};
// Main function
int main() {
    // Creating objects of Dog and Cat
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    
    // Simulating sounds
    dog->makeSound();
    cat->makeSound();
    
    // Clean up dynamically allocated memory
    delete dog;
    delete cat;
    
    return 0;
}