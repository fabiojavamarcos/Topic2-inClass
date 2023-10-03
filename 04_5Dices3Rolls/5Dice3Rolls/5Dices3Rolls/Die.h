//
//  Die.h
//  5Dices3Rolls
//
//  Created by Fabio Marcos De Abreu Santos on 10/2/23.
//

#ifndef Die_h
#define Die_h

class Die
{
private:
    int m_sides;
    int m_value;

public:
    Die(int sides);
    Die(void);
    void Roll(void);
    int GetValue(void);
};

#endif /* Die_h */
