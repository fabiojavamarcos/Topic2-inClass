//
//  Flight.h
//  FlightManagementSystem
//
//  Created by Fabio Marcos De Abreu Santos on 10/16/23.
//

#ifndef Flight_h
#define Flight_h
#include <string>
#include "Name.h"
#include "Equipment.h"

using namespace std;

class Flight
{
private:
    Name name;
    Equipment equipment;
    int id;
    string cia;
    string eta;
    string etd;

public:
    Flight(void);
    Flight(Name n, Equipment e, int id, string cia, string etd, string eta);
    
    string ToString(void);
    
    friend ostream& operator<<(ostream& out, Flight& flight);
};

#endif /* Flight_h */
