#pragma once
#include <string>

class Encrypt {
protected:
	std::string plain;
	std::string cipher;

public:
	Encrypt();

	std::string& getPlain() const;
	std::string& getCipher() const;

	void encode();
	void decode();

	void read();
	void write();
};
