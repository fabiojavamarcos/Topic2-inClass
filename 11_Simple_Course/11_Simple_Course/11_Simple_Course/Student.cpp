//
//  Student.cpp
//  11_Simple_Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/17/23.
//

#include <stdio.h>
#include "Student.h"
using namespace std;

Student::Student()
{

}

Student::Student(string name, string address, string courseName)
{
  this->name = name;
  this->address = address;
  this->course.setCourseName(courseName);

}


string Student::getName()
{
    return name;
}

string Student::showCourse() //show the Instance variable of Course.
{
  return course.getCourseName();
}

void Student::setCourse(string newName) //set the Instance variable of Course.
{
   this->course.setCourseName(newName);
}
