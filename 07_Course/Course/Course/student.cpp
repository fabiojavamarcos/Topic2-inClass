//
//  student.cpp
//  Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/5/23.
//

#include <stdio.h>
#include "student.h"

Student::Student(){                     //no argument constructor{
}

Student::~Student(){
}

Student::Student(string f, string l){       //argument constructor
    fname = f;
    lname =l;
}
Student::Student(int i,string f, string l) {      //argument constructor
    fname = f;
    lname =l;
    id = i;
}

    
double Student::average() {                //implementation of the function that determines the average.
    return (grade1 + grade2 + grade3) / 3;
}

double Student::minGrade() {          //implementation of the function that obtains the minimum grade.
    double min = grade1;
    if(grade2 < min)
        min = grade2;
    if(grade3 < min)
        min = grade3;
    return min;
}

double Student::maxGrade() {       //implementation of the function that obtains the maxium grade.
    double max = grade1;
    if(grade2 > max)
        max = grade2;
    if(grade3 > max)
        max = grade3;
    return max;
}
    
void Student::setFname(string f){         //implementation of the function that updates the name.
    fname = f;
}

void Student::setLname(string l) {        //implementation of the function that updates the last name.
    lname =l;
}

void Student::setName(string f, string l){     //implementation of the function that updates the full name.
    fname =f;
    lname =l;
}

void Student::setGrade1(double g1) {     //implementation of the function that updates the grade1.
    grade1 = g1;
}

void Student::setGrade2(double g2){     //implementation of the function that updates the grade2.
    grade2 = g2;
}

void Student::setGrade3(double g3){      //implementation of the function that updates the grade3.
    grade3 = g3;
}


string Student::getFname() {         //implementation of the function that obtains the first name.
    return fname;
}

string Student::getLname() {         //implementation of the function that obtains the last name.
    return lname;
}

double Student::getG1(){            //implementation of the function that obtains the grade1.
    return grade1;
}

double Student::getG2(){           //implementation of the function that obtains the grade2.
    return grade2;
}

double Student::getG3(){          //implementation of the function that obtains the grade3.

    return grade3;
}

int Student::getId(){         //implementation of the function that obtains the id
    return id;
}

