//
//  Card.h
//  War
//
//  Created by Fabio Marcos De Abreu Santos on 10/3/23.
//

#ifndef Card_h
#define Card_h

class Card{
private:
    int numCards;
    int value;
public:
    Card(int c);
    Card();
    int Hand();
    int getNumCards();
    int getValue();
    void setNumCards(int c);
    void setValue(int v);
};
#endif /* Card_h */
