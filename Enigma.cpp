#include "Enigma.h"

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
        rotor3++;
    }
    if (rotor3 > 25) {
        rotor3 = 0;
    }
}

int getLetterId(std::string message) {
    for (int i = 0; i < 26; i++) {
        if ()
    }
    return i
}

void Enigma::encode() {
    const int messageSize = plain.size();
    for (int i = 0; i < messageSize; i++) {
        std::string l = getLetterId(plain);
        plain[i] = letters[rotor1];
        turnRotors();
    }
}

void Enigma::decode() {

}