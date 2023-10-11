//
//  course.h
//  Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/5/23.
//

#ifndef course_h
#define course_h

#include <string>
#include "student.h"
#include "Professor.h"

using namespace std;

class Course
{
    private:
    string id;                      //properties
    string name;
    vector<Student> studentsVector;
    Professor prof;
    
    public:
     Course();                      //no argument constructor
    ~Course();                      //destructor to deallocate memory.
    Course(string id, string name);    //argument constructor
    
    void setProf(Professor p);
    void setId(string f);            //update id.
    void setName(string l);          //update name.
    
    string getName();
    string getId();
    Professor getProf();
    
    void enroll(Student s);
    bool cancel(Student s);
    
    void printClass();
    
    void enrollAll(vector<Student> studentsVector);
    
    vector<Student> getAll();
    
};

#endif /* course_h */
