//
//  Course.cpp
//  11_Simple_Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/17/23.
//

#include <stdio.h>
#include "Course.h"

Course::Course() :courseName("CS101")
{
 
}
Course::Course(string namCourse)
{
  this->courseName = namCourse;
}

string Course::getCourseName()const // not supposed to change any instance variable!!!
{
  return this->courseName;
}

void Course::setCourseName(string name)
{
  this->courseName = name;
}
