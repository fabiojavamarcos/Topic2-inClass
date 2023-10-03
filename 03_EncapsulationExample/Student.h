#pragma once
// pragma once takes care of this
// just to show
#ifndef STUDENT_H
#define STUDENT_H
/*

------------------------------------
|             Student              |
------------------------------------
| - name: string                   |
| - age: int                       |
| - major: string                  |
------------------------------------
| + Student()                      |
| + Student(name: string,          |
|            age: int,             |
|            major: string)        |
| + ~Student()                     |
| + getName(): string              |
| + setName(name: string): void    |
| + getAge(): int                  |
| + setAge(age: int): void         |
| + getMajor(): string             |
| + setMajor(major: string): void  |
| + displayInfo(): void            |
| + isMinor(): bool                |
------------------------------------
*/
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string major;

public:
    // Default constructor
    Student();

    // Constructor with parameters
    Student(const std::string& n, int a, const std::string& m);

    // Destructor
    ~Student();

    // Getter for name
    std::string getName() const;

    // Setter for name
    void setName(const std::string& n);

    // Getter for age
    int getAge() const;

    // Setter for age
    void setAge(int a);

    // Getter for major
    std::string getMajor() const;

    // Setter for major
    void setMajor(const std::string& m);

    // Member function to display student information
    void displayInfo() const;

    // Member function to check if the student is a minor
    bool isMinor() const;
};

#endif  // STUDENT_H

