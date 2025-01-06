#pragma once
#include <string>

class Encrypt {
protected:
	std::string plain = "je suis";
	std::string cipher = "je suis";

public:
	Encrypt();
    virtual ~Encrypt() = default;

	std::string& getPlain();
	std::string& getCipher();

	void read();
	void write();

	virtual void encode() = 0;
	virtual void decode() = 0;

};
