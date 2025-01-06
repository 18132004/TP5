#pragma once
#include <string>

class Encrypt {
protected:
	std::string plain;
	std::string cipher;

public:
	Encrypt();

	std::string& getPlain();
	std::string& getCipher();

	void read();
	void write();
    
	void encode();
	void decode();

};
