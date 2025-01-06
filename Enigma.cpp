#include "Enigma.h"
#include <iostream>

Enigma::Enigma() : Encrypt() {

}

void Enigma::turnRotors() {
    rotor1++;
    if (rotor1 > 25) {
        rotor1 = 0;
        rotor2++;
    }
    if (rotor2 > 25) {
        rotor2 = 0;
    }
}

int Enigma::getLetterId(const char& l) {
    for (int i = 0; i < 26; i++) {
        if (l == letters[i]) {
            return i;
        }
    }
}

void Enigma::encode() {
    const int messageSize = plain.size();
    for (int i = 0; i < messageSize; i++) {
        int letterId = getLetterId(plain[i]);
        cipher[i] = letters[letterId + rotor1];
        turnRotors();
    }
}

void Enigma::decode() {

}

void Enigma::displayMessage() {
    std::cout << "Cipher: " << cipher << std::endl;
}