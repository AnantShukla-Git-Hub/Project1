#include "encrypt.h"

std::string encryptText(const std::string& text) {
    std::string result = text;
    for (char &c : result) {
        c = c + 1;
    }
    return result;
}
