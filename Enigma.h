#pragma once
#include "Encrypt.h"

class Enigma : public Encrypt {
private:
    std::string rotorKey1;
    std::string rotorKey2;
    std::string rotorKey3;

public:
    Enigma();
    
    void encode() override;
	void decode() override;

};