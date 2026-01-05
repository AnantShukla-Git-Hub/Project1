#include "encrypt.h"
#include <string>
using namespace std;

string encryptText(string text, int key) {
    for (size_t i = 0; i < text.length(); i++) {
        char c = text[i];

        // lowercase letters
        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + key % 26 + 26) % 26 + 'a';
        }
        // uppercase letters
        else if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + key % 26 + 26) % 26 + 'A';
        }
        // digits
        else if (c >= '0' && c <= '9') {
            c = (c - '0' + key % 10 + 10) % 10 + '0';
        }
        // symbols / emoji ko unchanged bcz wo generally 1 byte ke nahi hote and ye logic unke liye sahi se kaam nahi karega

        text[i] = c;
    }
    return text;
}
