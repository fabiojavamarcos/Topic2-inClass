//
//  main.cpp
//  11_Simple_Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/17/23.
//

#include <iostream>
#include "Student.h"
using namespace std;

int main()
{

    Student student1("Fabio","21 W Glenn, Phoenix, AZ", "C++!");
    Student student2("Smith","7526, Glendale, AZ", "Java!");
    cout << student1.getName() << " is enrolled in the course: " << student1.showCourse() << endl;
    cout << student2.getName() << " is enrolled in the course: " << student2.showCourse()  << endl;
    cout << " " << endl;
    
    //Updating the courses
    student1.setCourse("C#");
    student2.setCourse("C");
    cout << "After updating the courses we have that:" << endl;
    cout << " " << endl;

    cout << student1.getName() << " is enrolled in the course: " << student1.showCourse() << endl;
    cout << student2.getName() << " is enrolled in the course: " << student2.showCourse()  << endl;
    
    Student student3("Johnny","9999, Glendale, AZ", "ML!");
    Course c1 = Course();
    cout << c1.getCourseName() << " is the default course" << endl;
    student3.setCourse(c1.getCourseName());
    
    cout << student3.getName() << " is enrolled in the course: " << student3.showCourse()  << endl;
    
    return 0;
}
