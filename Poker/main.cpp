//
//  main.cpp
//  Poker
//
//  Created by Fabio Marcos De Abreu Santos on 10/2/23.
//
#include <iostream>
#include <string>
#include <vector>
#include <format>
//#include <concrt.h>
#include "Card.h"

using namespace std;

void ShowHand(vector<Card> hand);
int GetTotalScore(vector<Card> hand);
void Distribute(vector<Card> &hand);

int main()
{
    vector<Card> hand(13);
    Distribute(hand);
    ShowHand(hand);
    for (auto cnt = 0; cnt < 3; cnt ++)
    {
        int numCardToDiscard;
        cout << "Enter total number of cards to discard: ";
        cin >> numCardToDiscard;
        for (auto reCnt = 0; reCnt < numCardToDiscard; reCnt ++)
        {
            int card2Discard;
            cout << "Enter the card number to discard: ";
            cin >> card2Discard;
            hand[card2Discard - 1].Hand();
        }

        ShowHand(hand);
        auto total = GetTotalScore(hand);
        cout << "Total for this hand: " << total << endl;
    }
}

void Distribute(vector<Card> &hand)
{
    for (auto cnt = 0; cnt < hand.size(); cnt++)
    {
        hand[cnt].Hand();
        //Concurrency::wait(800);
    }
}

void ShowHand(vector<Card> hand)
{
    string handCntStr = "", handValueStr = "", separator = "";
    for (auto cnt = 0; cnt < hand.size(); cnt ++)
    {
        int temp = cnt + 1;
        handCntStr.append(" ");
        handCntStr.append(to_string(temp));
        handValueStr.append(" ");
        handValueStr.append(to_string(hand[cnt].GetValue()));
        separator.append("----");
    }

    cout << handCntStr << endl;
    cout << separator << endl;
    cout << handValueStr << endl;
}

int GetTotalScore(vector<Card> hand)
{
    auto total = 0;
    for (auto cnt = 0; cnt < hand.size(); cnt++)
    {
        total += hand[cnt].GetValue();
    }

    return total;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
