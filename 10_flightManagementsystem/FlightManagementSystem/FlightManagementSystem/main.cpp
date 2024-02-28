//
//  main.cpp
//  FlightManagementSystem
//
//  Created by Fabio Marcos De Abreu Santos on 10/16/23.
//

#include <iostream>
#include "Name.h"
#include "Equipment.h"
#include "Flight.h"

using namespace std;

int main()
{
    
    Name name("Barbara");
    cout << name << endl << endl;

    cout << "Enter your name: ";
    
    cin >> name;
    
    cout << name << endl << endl;


    Equipment eqp("Embraer 195");
    cout << eqp << endl << endl;
    
    eqp.SetAircraft("Embraer Eb2");
    cout << eqp << endl;
    
    cout << "----Customized Flight------" << endl;
    Flight f2 = Flight(name, eqp, 123, "Azul", "10pm PHX", "7am RIO");
    cout << f2.ToString() << endl;
    cout << "-----------" << endl;

    cout << "----default Flight------" << endl;
    Flight f1 = Flight();
    cout << f1.ToString() << endl;
    cout << "-----------" << endl;
    

}
