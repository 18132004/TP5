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

	void read(const std::string& filename);
	void write(const std::string& filename);
    
	void encode();
	void decode();

};
