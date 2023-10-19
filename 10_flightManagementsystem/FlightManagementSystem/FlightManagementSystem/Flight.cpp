//
//  Flight.cpp
//  FlightManagementSystem
//
//  Created by Fabio Marcos De Abreu Santos on 10/16/23.
//

#include <stdio.h>
#include <string>
#include <format>
#include <iostream>
#include "Flight.h"


Flight::Flight(void) //default Flight
{
    Name("Smith");
    Equipment("737");
    eta = "12:59 LAS";
    etd = "11:59 BSB";
    id = 999;
    cia = "AA";
}
Flight::Flight(Name n, Equipment e, int id, string cia, string etd, string eta){
    name = n;
    equipment = e;
    this->id = id;
    this->cia = cia;
    this->etd = etd;
    this->eta = eta;
}
string Flight::ToString(void)
{
    //cout << name.ToString() << " - " << equipment.ToString() << " : " << cia << " " << id << " dep: " << etd << " arr: " << eta << endl;
    string msg = name.ToString() + " - " + equipment.ToString() + " : " + cia + " " + to_string(id) + " dep: " + etd + " arr: " + eta;
    return msg;
}


ostream& operator<<(ostream& out, Flight& flight)
{
    out << flight.id << endl << flight.cia << endl;
    return out;
}
