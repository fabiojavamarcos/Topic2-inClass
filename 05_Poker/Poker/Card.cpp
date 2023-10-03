//
//  Card.cpp
//  Poker
//
//  Created by Fabio Marcos De Abreu Santos on 10/2/23.
//

#include <stdlib.h>
#include <time.h>
#include "Card.h"

using namespace std;

Card::Card(int sides)
{
    m_sides = sides;
    m_value = 0;
    
}

Card::Card(void)
{
    m_sides = 13;
    m_value = 0;
}

void Card::Hand(void)
{
    srand(time(NULL));
    m_value = (rand() % m_sides) + 1;
}

int Card::GetValue(void)
{
    return m_value;
}


