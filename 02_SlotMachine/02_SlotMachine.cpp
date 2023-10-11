#include <iostream>
#include "SlotMachine.h"

int main() {

	SlotMachine ladyLuck;
	ladyLuck.pullLever();
	ladyLuck.display();
	while (!ladyLuck.isWinner()) {
		ladyLuck.pullLever();
		ladyLuck.display();
	}
	std::cout << "You won in " << ladyLuck.getSpinCt() << " spins!\n";

	return 0;
}