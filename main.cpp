#include <iostream>
#include "Enigma.h"

int main() {
    Enigma enigma;
	enigma.read("input.txt");
    enigma.encode();
	enigma.write("output.txt");
    enigma.displayMessage();

	return 0;
}