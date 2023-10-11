//
//  main.cpp
//  War
//
//  Created by Fabio Marcos De Abreu Santos on 10/3/23.
//

#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

void Distribute(vector<Card> &hand){
    srand((unsigned) time(NULL));
    for (int i=0;i<5;i++){
        Card c(13);
        
        int value = (rand() % 13 + 1);
        c.setValue(value);
        hand[i]=c;
        
        //hand[i].Hand();
        //hand[i]=Hand();
        //hand[i]=c.getValue();
    }
}
void ShowHand(vector<Card> hand){
    cout << "-----------" << endl;
    for (int i=0;i<5;i++){
        
        cout << "  " << i ;
    }
    cout << "\n-----------" << endl;
    
    for (int i=0;i<5;i++){
        
        cout << "  " << hand[i].getValue() ;
    }
    cout << "\n-----------" << endl;
}
void GetTotalScore(vector<Card> hand){
    int sum = 0;
    for (int i=0;i<5;i++){
        sum += hand[i].getValue();
    }
    cout << "Hand value:" << sum << endl;
}
int main(int argc, const char * argv[]) {
    vector<Card> hand(13);
    string click;
    std::cout << "Hello, Card game!\n";
    std::cout << "press any key to continue\n";
    cin >> click;
    srand((unsigned) time(NULL));
    Distribute(hand);
    ShowHand(hand);
    for (int i=0; i<3; i++){
        
        int numDiscard;
        cout << "Enter a number of cards to discard" << endl;
        cin >> numDiscard;
        
        for (int j=0; j<numDiscard; j++){
            int card2Discard;
            cout << "Say card number (0-4)" << endl;
            cin >> card2Discard;
            if (card2Discard >=0 && card2Discard <5){
                Card c(13);
                
                int value = (rand() % 13 + 1);
                c.setValue(value);
                hand[card2Discard]=c;
         
                //Card c;
                //hand[card2Discard] = c.Hand();
            }
        }
        ShowHand(hand);
        GetTotalScore(hand);
    }
    cout << "Final Score" << endl;
    GetTotalScore(hand);
    
    
    return 0;
}
