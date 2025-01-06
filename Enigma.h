#pragma once
#include "Encrypt.h"
#include <vector>

class Enigma : public Encrypt {
private:
    // {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    const std::string letters = "abcdefghijklmnopqrstuvwxyz";
    int rotor1 = 0;
    int rotor2 = 0;

    void turnRotors();
    int getLetterId(const char& l);

public:
    Enigma();
    
    void encode() override;
	void decode() override;

    void displayPlain();
    void displayCipher();

};