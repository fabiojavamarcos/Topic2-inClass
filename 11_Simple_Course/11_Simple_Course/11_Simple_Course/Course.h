//
//  Course.h
//  11_Simple_Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/17/23.
//

#ifndef COURSE_H
#define COURSE_H
#include <string>
using namespace std;

class Course
{
   private:
 
   string courseName;
   
   public:
   Course();
   Course(string);
   
   void setCourseName(string);     //setter
   string getCourseName()const;         //geter
   



};
#endif /* Course_h */
