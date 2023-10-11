#pragma once

#include <iostream>

class SlotMachine {
private:
	int reels[3];
	int numSymbols;
	int spinCt;
	void setNumSymbols(int);
	bool threeOfAKind()const;
	bool twoOfAKind()const;
	bool straight()const;

public:
	SlotMachine() { setNumSymbols(10); spinCt = 0; }
	SlotMachine(int numSymbols);
	int getNumSymbols()const;
	int getSpinCt()const;
	void pullLever();
	bool isWinner()const;
	void display()const;
};

