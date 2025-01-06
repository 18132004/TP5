#pragma once
#include "Encrypt.h"

class Enigma : public Encrypt {
private:
    std::string letters = "abcdefghijklmnopqrstuvwxyz";
    int rotor1 = 0;
    int rotor2 = 0;
    int rotor3 = 0;

    void turnRotors();
    int getLetterId();

public:
    Enigma();
    
    void encode() override;
	void decode() override;

};