//
//  main.cpp
//  09_Employee
//
//  Created by Fabio Marcos De Abreu Santos on 10/11/23.
//

#include <iostream>
using namespace std;
class Address {
    public:
   string addressLine, city, state;
     Address(string addressLine, string city, string state)
    {
        this->addressLine = addressLine;
        this->city = city;
        this->state = state;
    }
    void setAddressLine(string s){
        addressLine = s;
    }
};
class Employee
    {
        private:
        Address* address;  //Employee HAS-A Address
        public:
        int id;
        string name;
        Employee(int id, string name, Address* address)
       {
           this->id = id;
           this->name = name;
           this->address = address;
       }
     void display()
       {
           cout<<id <<" "<<name<< " "<<
             address->addressLine<< " "<< address->city<< " "<<address->state<<endl;
       }
     void setAddress(Address* a)
      {
           address = a;
      }
   };
int main(void) {
    Address a1= Address("C-146, Sec-15","Noida","UP");
    Employee e1 = Employee(101,"Nakul",&a1);
    e1.display();
    a1.setAddressLine("bla");
    e1.display();
   return 0;
}
