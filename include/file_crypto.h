#ifndef FILE_CRYPTO_H
#define FILE_CRYPTO_H

#include <string>

// Encrypt a text file and write encrypted output to another file
bool encryptFile(const std::string& inputFile,
                 const std::string& outputFile,
                 int key);

// Decrypt a text file and write decrypted output to another file
bool decryptFile(const std::string& inputFile,
                 const std::string& outputFile,
                 int key);

#endif
