//
//  main.cpp
//  12_file
//
//  Created by Fabio Marcos De Abreu Santos on 10/19/23.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "File Read and Write\n";
    
    ifstream input;
    input.open("/Users/fd252/Downloads/myfilein1.txt");
    
    if(input.fail()){
        cout << "file not found! "<< endl;
        return 0;
    }
    
    string name;
    int value;
    double avg;
    int countReads = 0;
    int balance = 0;
    int min = 0;
    int max = 0;
    input >> name >> value;
    
    if (input.eof()) {
        cout << "Houston we have a problem! "<< endl;
        return 0;
    }
    cout << "Read:" << name << " - " << value << endl; // log for debug
    countReads++;

    min = value;
    max = value;
    
    while (!input.eof()){
        
  
         balance = balance + value;
        
        if (value > max){
            max = value;
        }
        if (value < min){
            min = value;
        }
        input >> name >> value;
        
        if (input.eof()) {
            break;
        }
        cout << "Read:" << name << " - " << value << endl; // log for debug
        countReads++;
  
        
    }
    
    avg = balance / countReads;
    
    ofstream output;
    output.open("/Users/fd252/Downloads/myfileout.txt");
    
    if (output.fail()){
        cout << "Houston we have a problem! "<< endl;
        return 0;
    }
    output << "avg:" << avg << endl;
    output << "min:" << min << endl;
    output << "max:" << max << endl;
 
    return 0;
}
