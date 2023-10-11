#include "SlotMachine.h"
#include "SlotMachine.h"
#include <time.h>
#include <cstdlib>

void SlotMachine::setNumSymbols(int numSymbols)
{
	//only called at construction
	srand(time(NULL));
	this->numSymbols = numSymbols;
}

bool SlotMachine::threeOfAKind() const
{
	bool win = false;
	if (reels[0] == reels[1] &&
		reels[1] == reels[2]) {
		win = true;
		std::cout << "3 of a kind!\n";
	}
	return win;
}

bool SlotMachine::twoOfAKind() const
{
	bool winner = false;
	if (reels[0] == reels[1] ||
		reels[1] == reels[2] ||
		reels[2] == reels[0]) {
		winner = true;
		std::cout << "2 of a kind!\n";
	}
	return winner;
}

bool SlotMachine::straight() const
{
	bool win = false;
	if (reels[0] + 1 == reels[1] &&
		reels[1] + 1 == reels[2]) {
		win = true;
		std::cout << "Straight!\n";
	}
	return win;
}

SlotMachine::SlotMachine(int numSymbols)
{
	spinCt = 0;
	setNumSymbols(numSymbols);
}

int SlotMachine::getNumSymbols() const
{
	return numSymbols;
}

int SlotMachine::getSpinCt() const
{
	return spinCt;
}

void SlotMachine::pullLever()
{
	//spin each reel
	reels[0] = rand() % numSymbols;
	reels[1] = rand() % numSymbols;
	reels[2] = rand() % numSymbols;
	//count this spin
	spinCt++;
}

bool SlotMachine::isWinner() const
{
	return threeOfAKind() || straight();
}

void SlotMachine::display() const
{
	std::cout << "-------------------" << std::endl;
	std::cout << "|  " << reels[0] << "  |  " << reels[1] << "  |  " << reels[2] << "  | " << std::endl;
	std::cout << "-------------------" << std::endl;
}