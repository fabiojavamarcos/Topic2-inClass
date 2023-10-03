//
//  Card.h
//  Poker
//
//  Created by Fabio Marcos De Abreu Santos on 10/2/23.
//

#ifndef Card_h
#define Card_h
#include <string>
using namespace std;

class Card
{
private:
    int m_sides;
    int m_value;
    string m_suit;

public:
    Card(int sides);
    Card(void);
    void Hand(void);
    int GetValue(void);
    string GetSuit(void);
};

#endif
 /* Card_h */
