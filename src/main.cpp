#include <iostream>
#include "encrypt.h"
#include "decrypt.h"

int main() {
    std::string text;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::string encrypted = encryptText(text);
    std::cout << "Encrypted: " << encrypted << std::endl;

    std::string decrypted = decryptText(encrypted);
    std::cout << "Decrypted: " << decrypted << std::endl;

    return 0;
}
