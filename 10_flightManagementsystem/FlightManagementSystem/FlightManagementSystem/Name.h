//
//  Name.h
//  FlightManagementSystem
//
//  Created by Fabio Marcos De Abreu Santos on 10/16/23.
//

#ifndef Name_h
#define Name_h

#include <string>

using namespace std;

class Name
{
private:
    string name;

public:
    Name(string name);
    Name(Name &copy);
    Name(void);
    string ToString(void);
    string GetName(void);
    friend ostream& operator<<(ostream& out, Name& name);
    friend istream& operator>>(istream& in, Name& name);
    

};

#endif /* Name_h */
