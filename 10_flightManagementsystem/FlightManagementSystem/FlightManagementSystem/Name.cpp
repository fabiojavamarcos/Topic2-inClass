//
//  Name.cpp
//  FlightManagementSystem
//
//  Created by Fabio Marcos De Abreu Santos on 10/16/23.
//

#include <stdio.h>

#include <string>
#include <format>
#include <iostream>
#include "Name.h"

Name::Name(string name)
{
    this->name = name;
}

Name::Name(Name& copy)
{
    this->name = copy.name;
}

Name::Name(void)
{
    name = "Smith"; //default name
}

//string Name::ToString(void)
//{
//    return format("{}, {} {}.", m_lastName, m_firstName, m_middleName.substr(0, 1));
//}
string Name::ToString(void)
{
    //cout <<  "name:" << name << endl;
    string msg = "Name: " + name;
    return msg;

}


string Name::GetName(void)
{
    return name;
}

ostream& operator<<(ostream& out, Name& name)
{
    out << name.GetName() << endl;
    return out;
}

istream& operator>>(istream& in, Name& name)
{
    getline(in, name.name);
    return in;
}
