//
//  Card.cpp
//  War
//
//  Created by Fabio Marcos De Abreu Santos on 10/3/23.
//
#include <stdio.h>
#include "Card.h"
#include <ctime>
#include <stdlib.h>

Card::Card(int c){
   
    numCards = c;
}
Card::Card(){
   
    numCards = 13;
}
int Card::getNumCards(){
    return numCards;
}
int Card::getValue(){
    return value;
}
void Card::setNumCards(int c){
    numCards = c;
}
void Card::setValue(int v){
    value = v;
}
int Card::Hand(){
    //srand((unsigned) time(NULL));
    value = (rand() % numCards + 1);
    return value;
}
