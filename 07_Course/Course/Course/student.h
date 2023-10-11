//
//  student.h
//  Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/5/23.
//

#ifndef student_h
#define student_h


#include <string>
using namespace std;

class Student
{
    private:
    int id;
    string fname;                      //properties
    string lname;
    double grade1;
    double grade2;
    double grade3;
    
    public:
     Student();                      //no argument constructor
    ~Student();                      //destructor to deallocate memory.
    Student(string f, string l);    //argument constructor
    Student(int i, string f, string l);    //argument constructor
    
    double average();               //function to calculate average.
    double minGrade();
    double maxGrade();
    
    void setFname(string f);            //update Fname.
    void setLname(string l);            //update Lname.
    void setName(string f, string l);   //update Fullname.
    
    void setGrade1(double g1);       //set grade 1.
    void setGrade2(double g2);       //set grade 2.
    void setGrade3(double g3);       //set grade 3.
    
    string getFname();
    string getLname();
    double getG1();
    double getG2();
    double getG3();
    int getId();
    
};




#endif /* student_h */
