//
//  Professor.cpp
//  Course
//
//  Created by Fabio Marcos De Abreu Santos on 10/10/23.
//

#include <stdio.h>
#include "Professor.h"


Professor::Professor(){                     //no argument constructor{
}

Professor::~Professor(){
}

Professor::Professor(string n, string t){       //argument constructor
    name = n;
    title =t;
}
Professor::Professor(int i,string n, string t) {      //argument constructor
    name = n;
    title =t;
    id = i;
}

Professor::Professor(Professor &copy) {      //copy constructor
    this->name = copy.getName();
    this->title = copy.getTitle();
    this->id = copy.getId();
}

void Professor::setId(int i){         //implementation of the function that updates the name.
    id = i;
}

void Professor::setTitle(string t) {        //implementation of the function that updates the last name.
    title =t;
}

void Professor::setName(string n){     //implementation of the function that updates the full name.
    name =n;
    
}


string Professor::getName() {         //implementation of the function that obtains the first name.
    return name;
}

string Professor::getTitle() {         //implementation of the function that obtains the last name.
    return title;
}


int Professor::getId(){         //implementation of the function that obtains the id
    return id;
}

