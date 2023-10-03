//
//  Die.cpp
//  5Dices3Rolls
//
//  Created by Fabio Marcos De Abreu Santos on 10/2/23.
//


#include <stdlib.h>
#include <time.h>
#include "Die.h"

using namespace std;

Die::Die(int sides)
{
    m_sides = sides;
    m_value = 0;
}

Die::Die(void)
{
    m_sides = 6;
    m_value = 0;
}

void Die::Roll(void)
{
    srand(time(NULL));
    m_value = (rand() % m_sides) + 1;
}

int Die::GetValue(void)
{
    return m_value;
}

