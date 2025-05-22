// University Management System to demonstrate Composition and Aggregation
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Composition Class
class Address {
public:
    string city, street;
    Address(string c = "", string s = "") : city(c), street(s) {
        cout << "[Address Created]\n";
    }
    ~Address() {
        cout << "[Address Destroyed]\n";
    }
};

class Student {
public:
    string name;
    Address address; // Composition
    vector<string> enrolledCourses; // Aggregation (course names)

    Student(string n, string city, string street) : name(n), address(city, street) {
        cout << "[Student Created: " << name << "]\n";
    }
    ~Student() {
        cout << "[Student Destroyed: " << name << "]\n";
    }

    void enrollCourse(string courseName) {
        enrolledCourses.push_back(courseName);
    }

    void showInfo() {
        cout << "Student: " << name << ", Address: " << address.city << ", " << address.street << "\n";
        cout << "Enrolled Courses: ";
        for (auto& c : enrolledCourses) cout << c << ", ";
        cout << "\n";
    }
};

class Professor {
public:
    string name;
    string expertise;
    Professor(string n, string e) : name(n), expertise(e) {
        cout << "[Professor Created: " << name << "]\n";
    }
    ~Professor() {
        cout << "[Professor Destroyed: " << name << "]\n";
    }
    void showInfo() {
        cout << "Professor: " << name << " | Expertise: " << expertise << "\n";
    }
};

class Course {
public:
    string name;
    Professor* instructor; // Aggregation

    Course(string n, Professor* p) : name(n), instructor(p) {
        cout << "[Course Created: " << name << "]\n";
    }
    ~Course() {
        cout << "[Course Destroyed: " << name << "]\n";
    }
    void showInfo() {
        cout << "Course: " << name << ", Instructor: " << instructor->name << "\n";
    }
};

class Department {
public:
    string name;
    vector<Professor*> professors; // Aggregation

    Department(string n) : name(n) {
        cout << "[Department Created: " << name << "]\n";
    }
    ~Department() {
        cout << "[Department Destroyed: " << name << "]\n";
    }

    void addProfessor(Professor* p) {
        professors.push_back(p);
    }

    void showInfo() {
        cout << "Department: " << name << "\n";
        for (auto p : professors) p->showInfo();
    }
};

class University {
public:
    string name;
    vector<Department*> departments; // Aggregation

    University(string n) : name(n) {
        cout << "[University Created: " << name << "]\n";
    }
    ~University() {
        cout << "[University Destroyed: " << name << "]\n";
    }

    void addDepartment(Department* d) {
        departments.push_back(d);
    }

    void showInfo() {
        cout << "University: " << name << "\n";
        for (auto d : departments) d->showInfo();
    }
};

int main() {
    // Create university
    University uni("NED University");

    // Create departments
    Department* seDept = new Department("Computer Science");
    Department* mathDept = new Department("Mathematics");

    // Create professors
    Professor* prof1 = new Professor("Miss Asma", "Programming");
    Professor* prof2 = new Professor("Sir Samad", "Mathematics");

    // Add professors to departments
    seDept->addProfessor(prof1);
    mathDept->addProfessor(prof2);

    // Add departments to university
    uni.addDepartment(seDept);
    uni.addDepartment(mathDept);

    // Create courses with aggregation
    Course course1("Object Oriented Programming", prof1);
    Course course2("Calculus", prof2);

    // Create students with composition
    Student s1("Akram", "Karachi", "5th Ave");
    Student s2("Aslam", "Lahore", "10th St");

    // Enroll students in courses
    s1.enrollCourse(course1.name);
    s2.enrollCourse(course2.name);
    s2.enrollCourse(course1.name);

    // Display information
    cout << "\n==== University Data ====" << endl;
    uni.showInfo();

    cout << "\n==== Courses ====" << endl;
    course1.showInfo();
    course2.showInfo();

    cout << "\n==== Students ====" << endl;
    s1.showInfo();
    s2.showInfo();

    cout << "\n==== Deleting ====" << endl;
    // Clean up (for aggregation)
    delete prof1;
    delete prof2;
    delete seDept;
    delete mathDept;

    return 0;
}
