#include <iostream>
#include <cstdlib>
#include <string>
#include "encrypt.h"
#include "decrypt.h"
#include "file_crypto.h"

using namespace std;

int main() {
    int choice;
    string text;
    int key;
    string inputFile, outputFile;

    while (true) {
        cout << "\n😉😗😏*** Encryption Tool ****😉😗😏\n";
        cout << "1. Encrypt Text\n";
        cout << "2. Decrypt Text\n";
        cout << "3. Encrypt Text File\n";
        cout << "4. Decrypt Text File\n";
        cout << "5. Encrypt Binary File (PDF/Image/ZIP)\n";
        cout << "6. Decrypt Binary File\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 7) {
            cout << "Exiting program...\n";
            break;
        }

        cin.ignore(); // clear input buffer jo bhi bacha hai taki getline sahi se kaam kare
        cout << "Enter key (number): "<<endl<<"(Any integer between -100 and 100 to make encryption more secure):"<<endl<<"Insani bacche key yaad bhi rakhna password hai :)\n";
        cin >> key;
        
        // key range validation
        if (key < -100 || key > 100) {
            cout << "Invalid key! Key must be between -100 and 100.\n";
            continue;
        }
        cin.ignore(); // clear input buffer before getline

        if (choice == 1) {
            cout << "Enter text: ";
            getline(cin, text);
            string encrypted = encryptText(text, key);
            cout << "Encrypted Text: " << encrypted << endl;
        }
        else if (choice == 2) {
            cout << "Enter text: ";
            getline(cin, text);
            string decrypted = decryptText(text, key);
            cout << "Decrypted Text: " << decrypted << endl;
        }
        else if (choice == 3) {
            cout << "Enter input file path: ";
            getline(cin, inputFile);
            outputFile = inputFile + ".enc";
            bool success = encryptFile(inputFile, outputFile, key);
            if (success) {
                cout << "File encryption succesfful." << endl;
                cout << "Encrypted file saved at:\n" << outputFile << endl;
            }
            else {
                cout << "Encryption failed. Please check file path and permissions.\n";
            }
        }
        else if (choice == 4) {
            cout << "Enter encrypted file path: ";
            getline(cin, inputFile);
            outputFile = inputFile + ".dec";
            bool success = decryptFile(inputFile, outputFile, key);
            if (success) {
                cout << "File decryption succesfful." << endl;
                cout << "Decrypted file saved at:\n" << outputFile << endl;
            }
            else {
                cout << "Decryption failed. Please check file path and permissions.\n";
            }
        }
        else if (choice == 5) {
            cout << "Enter input binary file path (pdf/image/zip/etc): ";
            getline(cin, inputFile);
            outputFile = inputFile + ".enc";
            bool success = encryptBinaryFile(inputFile, outputFile, key);
            if (success) {
                cout << "File encryption sucesful" << endl;
                cout << "Encrypted file saved at:\n" << outputFile << endl;
            }
            else {
                cout << "Encryption failed. Please check file path and permissions.\n";
            }
        }
        else if (choice == 6) {
            cout << "Enter input binary file path (pdf/image/zip/etc): ";
            getline(cin, inputFile);
            outputFile = inputFile + ".dec";
            bool success = decryptBinaryFile(inputFile, outputFile, key);
            if (success) {
                cout << "File decryption sucessful." << endl;
                cout << "Decrypted file saved at:\n" << outputFile << endl;
                cout << "Note: Rename the file to its original extension (jpg/pdf/etc.) to open it."<<endl<<"😒Ab ye mat boliyega file rename karni nahi aata "<<endl<<"😗simple last me .enc and .dec hata do ho gayi tumahri file ready"<<endl;
            }
            else {
                cout << "Decryption failed. Please check file path and permissions.\n";
            }
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
