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



    while (true) {
        cout << "\n===== Encryption Tool =====\n";
        cout << "Choices:\n";
        cout << "1. Encrypt Text\n";
        cout << "2. Decrypt Text\n";
        cout << "3. Encrypt File\n";
        cout << "4. Decrypt File\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting program...\n";
            break;
        }

        cin.ignore(); // clear input buffer jo bhi bacha hai taki getline sahi se kaam kare
        cout << "Enter key (number): "<<endl<<"(Any integer between -100 and 100 to make encryption more secure) ";
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
            string inputFile;
            cout << "Enter input file path: ";
            getline(cin, inputFile);
            string outputFile = inputFile + ".enc";
            bool success = encryptFile(inputFile, outputFile, key);
            if (success) {
                cout << "Your file is uploaded successfully for encryption." << endl;
                cout << "Encrypted file saved at:\n" << outputFile << endl;
            }
            else {
                cout << "Encryption failed. Please check file path and permissions.\n";
            }
        }
        else if (choice == 4) {
            string inputFile;
            cout << "Enter encrypted file path: ";
            getline(cin, inputFile);
            string outputFile = inputFile + ".dec";
            bool success = decryptFile(inputFile, outputFile, key);
            if (success) {
                cout << "Your file is uploaded successfully for decryption." << endl;
                cout << "Decrypted file saved at:\n" << outputFile << endl;
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
