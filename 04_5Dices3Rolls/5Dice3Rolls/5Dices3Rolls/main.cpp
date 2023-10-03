//
//  main.cpp
//  5Dice3Rolls
//
//  Created by Fabio Marcos De Abreu Santos on 10/2/23.
//

// 5Dice3Rolls.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <format>
//#include <concrt.h>
#include "Die.h"

using namespace std;

void ShowDice(vector<Die> dice);
int GetTotalScore(vector<Die> dice);
void RollDice(vector<Die> &dice);

int main()
{
    vector<Die> dice(5);
    RollDice(dice);
    ShowDice(dice);
    for (auto cnt = 0; cnt < 3; cnt ++)
    {
        int numDiceToRoll;
        cout << "Enter number of dice to roll: ";
        cin >> numDiceToRoll;
        for (auto reRollCnt = 0; reRollCnt < numDiceToRoll; reRollCnt ++)
        {
            int die2Reroll;
            cout << "Enter number of die to re-roll: ";
            cin >> die2Reroll;
            dice[die2Reroll - 1].Roll();
        }

        ShowDice(dice);
        auto total = GetTotalScore(dice);
        cout << "Total for this roll: " << total << endl;
    }
}

void RollDice(vector<Die> &dice)
{
    for (auto cnt = 0; cnt < dice.size(); cnt++)
    {
        dice[cnt].Roll();
        //Concurrency::wait(800);
    }
}

void ShowDice(vector<Die> dice)
{
    string diceCntStr = "", diceValueStr = "", seperator = "";
    for (auto cnt = 0; cnt < dice.size(); cnt ++)
    {
        int temp = cnt + 1;
        diceCntStr.append(" ");
        diceCntStr.append(to_string(temp));
        diceValueStr.append(" ");
        diceValueStr.append(to_string(dice[cnt].GetValue()));
        seperator.append("----");
    }

    cout << diceCntStr << endl;
    cout << seperator << endl;
    cout << diceValueStr << endl;
}

int GetTotalScore(vector<Die> dice)
{
    auto total = 0;
    for (auto cnt = 0; cnt < dice.size(); cnt++)
    {
        total += dice[cnt].GetValue();
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

