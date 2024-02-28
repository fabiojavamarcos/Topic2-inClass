//
//  main.cpp
//  OperatorOverload
//
//  Created by Fabio Marcos De Abreu Santos on 2/28/24.
//

#include <iostream>
#include <string>

using namespace std;

class Name {
private:
    string fullName;

public:
    Name() : fullName("") {} // Default constructor

    // Friend declaration for overloading >> operator
    friend istream& operator>>(istream& in, Name& name);

    // Just for demonstration, a method to print the name
    void printName() const {
        cout << "The name is: " << fullName << endl;
    }
};

// Definition of the overloaded >> operator
istream& operator>>(istream& in, Name& name) {
    getline(in, name.fullName); // Use getline to read a full line into the fullName member
    return in; // Return the istream object to allow chaining
}

int main() {
    Name myName;

    cout << "Enter your full name: ";
    cin >> myName; // This will invoke the overloaded >> operator

    myName.printName(); // Just to show the result

    return 0;
}
