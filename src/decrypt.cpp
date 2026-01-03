#include "decrypt.h"

std::string decryptText(const std::string& text) {
    std::string result = text;
    for (char &c : result) {
        c = c - 1;
    }
    return result;
}
