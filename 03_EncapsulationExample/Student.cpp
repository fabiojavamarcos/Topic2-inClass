#include "Student.h"

#include <iostream>

// Default constructor
Student::Student() : name(""), age(0), major("") {
    // Constructor body is empty
}

// Constructor with parameters
Student::Student(const std::string& n, int a, const std::string& m) : name(n), age(a), major(m) {
    // Constructor body is empty
}

// Destructor
Student::~Student() {
    // Perform any cleanup operations here
}

// Getter for name
std::string Student::getName() const {
    return name;
}

// Setter for name
void Student::setName(const std::string& n) {
    name = n;
}

// Getter for age
int Student::getAge() const {
    return age;
}

// Setter for age
void Student::setAge(int a) {
    age = a;
}

// Getter for major
std::string Student::getMajor() const {
    return major;
}

// Setter for major
void Student::setMajor(const std::string& m) {
    major = m;
}

// Member function to display student information
void Student::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Major: " << major << std::endl;
}

// Member function to check if the student is a minor
bool Student::isMinor() const {
    return age < 18;
}
