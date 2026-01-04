#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdlib>
#include "encrypt.h"
#include "decrypt.h"

using namespace std;

int main() {
    int choice;
    string text;
    int key;



    while (true) {
        cout << "\n===== Encryption Tool =====\n";
        cout << "1. Encrypt Text\n";
        cout << "2. Decrypt Text\n";
        cout << "3. Exit\n";
        cout << "(For Encrypt/Decrypt/Exit)Enter choice: ";
        cin >> choice;

        if (choice == 3) {
            cout << "Exiting program...\n";
            break;
        }

        cin.ignore(); // clear input buffer jo bhi bacha hai taki getline sahi se kaam kare
        cout << "Enter text: ";
        getline(cin, text);

        cout << "Enter key (number): "<<endl<<"(Any integer to make encryption more secure) ";
        cin >> key;
        
        // key range validation
        if (key < -100 || key > 100) {
            cout << "Invalid key! Key must be between -100 and 100.\n";
            continue;
        }

        if (choice == 1) {
            string encrypted = encryptText(text, key);
            cout << "Encrypted Text: " << encrypted << endl;
        }
        else if (choice == 2) {
            string decrypted = decryptText(text, key);
            cout << "Decrypted Text: " << decrypted << endl;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
