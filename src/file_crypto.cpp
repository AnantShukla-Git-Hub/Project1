#include "file_crypto.h"
#include "encrypt.h"
#include "decrypt.h"

#include <fstream>
#include <iostream>

using namespace std;

bool encryptFile(const string& inputFile,
                 const string& outputFile,
                 int key)
{
    ifstream inFile(inputFile);
    if (!inFile.is_open()) {
        cout << "Error: Unable to open input file: " << inputFile << endl;
        return false;
    }

    ofstream outFile(outputFile);
    if (!outFile.is_open()) {
        cout << "Error: Unable to create output file: " << outputFile << endl;
        return false;
    }

    string line;
    while (getline(inFile, line)) {
        string encryptedLine = encryptText(line, key);
        outFile << encryptedLine << '\n';
    }
    inFile.close();
    outFile.close();
    return true;
}

bool decryptFile(const string& inputFile,
                 const string& outputFile,
                 int key)
{
    ifstream inFile(inputFile);
    if (!inFile.is_open()) {
        cout << "Error: Unable to open input file: " << inputFile << endl;
        return false;
    }

    ofstream outFile(outputFile);
    if (!outFile.is_open()) {
        cout << "Error: Unable to create output file: " << outputFile << endl;
        return false;
    }

    string line;
    while (getline(inFile, line)) {
        string decryptedLine = decryptText(line, key);
        outFile << decryptedLine << '\n';
    }
    inFile.close();
    outFile.close();
    return true;
}
