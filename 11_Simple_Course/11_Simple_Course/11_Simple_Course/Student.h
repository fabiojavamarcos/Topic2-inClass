//
//  Student.h
//  11_Simple_Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/17/23.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
#include "Course.h"

class Student
{
   private:
   
   string name;
   string address;
   Course course;    //Instance variable of Course.
   
   public:
   
   Student() ;
   Student(string, string, string);
   
   void setName(string);
   void setAddress(string);
   void setCourse(string);
   
   string getName();
   string getAddress();
   string showCourse();

};

#endif /* Student_h */
