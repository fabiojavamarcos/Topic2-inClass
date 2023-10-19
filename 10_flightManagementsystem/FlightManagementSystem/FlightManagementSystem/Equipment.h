//
//  Equipament.h
//  FlightManagementSystem
//
//  Created by Fabio Marcos De Abreu Santos on 10/16/23.
//

#ifndef Equipment_h
#define Equipment_h

#include <string>

using namespace std;

class Equipment
{
private:
    string aircraft;

public:
    Equipment(string aircraft);
    Equipment(Equipment &copy);
    Equipment(void);
    string ToString(void);
    string GetAircraft(void);
    void SetAircraft(string ac);
    friend ostream& operator<<(ostream& out, Equipment& equipment);
};



#endif /* Equipment_h */
