#include "student.h"

#include <iostream>

int main() {
    // Create an object using the default constructor
    Student student1;
    student1.setName("John Doe");
    student1.setAge(20);
    student1.setMajor("Computer Science");

    // Create an object using the constructor with parameters
    Student student2("Jane Smith", 22, "Mathematics");

    // Print student information
    student1.displayInfo();
    student2.displayInfo();

    // Check if the students are minors
    if (student1.isMinor()) {
        std::cout << "Student 1 is a minor." << std::endl;
    }
    else {
        std::cout << "Student 1 is not a minor." << std::endl;
    }

    if (student2.isMinor()) {
        std::cout << "Student 2 is a minor." << std::endl;
    }

}