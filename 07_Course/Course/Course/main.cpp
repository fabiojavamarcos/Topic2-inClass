//
//  main.cpp
//  Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/5/23.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "student.h"                        //Include class Student.
#include "course.h"
#include <vector>

using namespace std;

    Student s1("Darth","Vader");    //Using argument constructor to create the object for Student1.
    Student s2(1,"R2","D2");
    Student s3(2,"Luke","Skywalker");
    Student s4(3,"Obi Wan","Kenobi");
    Student s5(4,"Jabba","The Hut");
    
    Course c1("JED-101","LighSaber 101");
    Course c2("JED-102","Fundamentals of the Force");
    Course c3("DARK-101", "Introduction to the Dark Side");
    Course c4("DARK-102", "Recruiting for the Dark");
    Course c5("ROB-101", "Understanding Humans");
    Course c6("JED-450", "Mastering the Force");
    Course c7("JED-550", "Immortality");

    //Create an array with these students.
    Student myStudentarray[5] = {s1, s2, s3, s4, s5};
    vector<Student> students;

    Professor p1(1,"Yoda","PHD");
    Professor p2(2,"Qui-Gon","PHD");
    Professor p3(3,"Palpatine","Master");
   
    void printStudentsAndAverageScore();
    void setScoresStudents();
    void enrollStudents();
    void allocateProfessors();
  
int main()
{
      
    srand((unsigned) time(0));                     //Alter the seed.
    
    enrollStudents();
    
    allocateProfessors();
    
    setScoresStudents();
 
    printStudentsAndAverageScore();
    
   return 0;
    
}
    void allocateProfessors(){
        c1.setProf(p1);
        c2.setProf(p2);
        c3.setProf(p3);
        
        c1.printClass();
        c2.printClass();
        c3.printClass();
        
        p3.setTitle("PHD");
        c2.setProf(p1);
        c2.printClass();
        c3.printClass();
        
        Professor p4(p2);
        cout << "has risen:" << p4.getName() << ", " << p4.getTitle() << endl;
        c3.setProf(p4);
        c3.printClass();
        
    }

    void enrollStudents(){
        
        //darth vader
        c4.enroll(s1);
        c7.enroll(s1);
        //Luke
        c6.enroll(s3);
        c7.enroll(s3);
        //Ben
        c7.enroll(s4);
        //R2
        c5.enroll(s2);
        // Jabba
        c3.enroll(s5);
        cout << "---------------------"<< endl;
        cout << "enrollement completed "<< endl;
        c1.printClass();
        c2.printClass();
        c3.printClass();
        c4.printClass();
        c5.printClass();
        c6.printClass();
        c7.printClass();
        cout << "---------------------"<< endl;
 
        //canceling Vader
        c7.cancel(s1);
        
        
    }

    void setScoresStudents(){
         
         for(int i = 0; i < 5; i++){
           double g1 = rand()%101;  //Generating random score1.
           double g2 = rand()%101;  //Generating random score2.
           double g3 = rand()%101;  //Generating random score3.
      
           myStudentarray[i].setGrade1(g1);   //Set grade 1 to student i.
           myStudentarray[i].setGrade2(g2);   //Set grade 2 to student i.
           myStudentarray[i].setGrade3(g3);   //Set grade 3 to student i.
           }
       
       }

   void printStudentsAndAverageScore(){
          for(int i = 0; i < 5; i++){
            cout <<"The student " << i + 1 << " is " << myStudentarray[i].getFname() << " " << myStudentarray[i].getLname();
            cout << ". Your minimum score is " << myStudentarray[i].minGrade() << " and " << " your maximum score is " <<  myStudentarray[i].maxGrade() << endl;
            cout << " then, your score average is " << myStudentarray[i].average() << "." << endl;
          }
    }

