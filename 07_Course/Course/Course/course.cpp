//
//  course.cpp
//  Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/5/23.
//

#include <iostream>
#include <cstdlib>
#include "course.h"
#include "student.h"

using namespace std;

Course::Course(){
    cout << "object (annonymous) created!"  << endl;
}
Course::~Course(){
    cout << "object destroyed" << endl;
}
Course::Course(string id, string name){
    this->id = id;
    this->name = name;
    cout << "object created:" << name << endl;
}

string Course::getId(){
    return id;
}

string Course::getName(){
    return name;
}

Professor Course::getProf(){
    return prof;
}

void Course::setName(string name){
    this->name = name;
}

void Course::setId(string id){
    this->id = id;
}

void Course::setProf(Professor p){
    prof = p;
}

vector<Student> Course::getAll(){
    return studentsVector;
}

void Course::enroll(Student s){
    
    studentsVector.push_back(s);
}
bool Course::cancel(Student s){
    cout<< " Before deleting..." << endl;
    printClass();
    bool found = false;
    int val = s.getId();
    for (int j=0; j<studentsVector.size(); j++){
        cout<< " " << studentsVector[j].getLname() << endl;
        int aux = studentsVector[j].getId();
        if (aux == val){
            studentsVector.erase(studentsVector.begin() + j);
        }
    }
    cout<< " After deleting..." << endl;
    printClass();

    return found;
}

void Course::printClass(){
    cout<< "Attendance for " << this->getId() << endl;
    for (int j=0; j<studentsVector.size(); j++)
        cout<< " " << studentsVector[j].getLname() << endl;
    cout << "---------------------"<< endl;
    cout<< " " << prof.getName() << ", " << prof.getTitle() << endl;
    cout << "---------------------"<< endl;
}

void Course::enrollAll(vector<Student> students){
    studentsVector = students;
}
