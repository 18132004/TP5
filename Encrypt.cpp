#include "Encrypt.h"
#include <fstream>
#include <iostream>

Encrypt::Encrypt() {}

std::string& Encrypt::getPlain() {
    return plain;
}

std::string& Encrypt::getCipher() {
    return cipher;
}

void Encrypt::read(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::getline(file, plain);
        file.close();
    } else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
}

void Encrypt::write(const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << cipher;
        file.close();
    } else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
}

void Encrypt::encode() {

}

void Encrypt::decode() {

}

