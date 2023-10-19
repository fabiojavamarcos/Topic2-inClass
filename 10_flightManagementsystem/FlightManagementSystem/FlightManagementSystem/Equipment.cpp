//
//  Equipment.cpp
//  FlightManagementSystem
//
//  Created by Fabio Marcos De Abreu Santos on 10/16/23.
//

#include <stdio.h>

#include <string>
#include <format>
#include <iostream>
#include "Equipment.h"

Equipment::Equipment(void)
{
    aircraft = "A320"; //default aircraft
}

Equipment::Equipment(string arc)
{
    aircraft = arc;
}

Equipment::Equipment(Equipment& copy)
{
    this->aircraft = copy.aircraft;
 }

string Equipment::ToString(void)
{
    //cout <<  "aircraft:" << aircraft << endl;
    string msg = "Aircraft: " + aircraft;
    return msg;
}

string Equipment::GetAircraft(void)
{
    return aircraft;
}



void Equipment::SetAircraft(string ac)
{
    aircraft = ac;
}

ostream& operator<<(ostream& out, Equipment& equipment)
{
    out << equipment.GetAircraft() << endl;
    return out;
}
