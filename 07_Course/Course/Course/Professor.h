//
//  Professor.h
//  Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/10/23.
//

#ifndef Professor_h
#define Professor_h
#include <string>
using namespace std;

class Professor
{
    private:
    int id;
    string name;                      //properties
    string title;
    
    
    public:
    Professor();                      //no argument constructor
    ~Professor();                      //destructor to deallocate memory.
    Professor(string n, string t);    //argument constructor
    Professor(int i, string n, string t);    //argument constructor
    Professor(Professor &copy); //copy constructor
    
    void setName(string n);            //update name.
    void setTitle(string t);            //update title.
    void setId(int i);              //update id.
       
    string getName();
    string getTitle();

    int getId();
    
};

#endif /* Professor_h */
