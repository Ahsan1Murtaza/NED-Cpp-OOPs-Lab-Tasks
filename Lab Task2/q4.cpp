#include <iostream>
#include <fstream>

using namespace std;

// Function to encrypt a file
void encryptFile(string inputFile, string outputFile, int shift) {
    ifstream in(inputFile);
    ofstream out(outputFile);

    char ch;
    while (in.get(ch)) {
        out.put(ch + shift); // Shift character forward
    }

    cout << "Encryption done! Check '" << outputFile << "'." << endl;

    in.close();
    out.close();
}

// Function to decrypt a file
void decryptFile(string inputFile, string outputFile, int shift) {
    ifstream in(inputFile);
    ofstream out(outputFile);

    char ch;
    while (in.get(ch)) {
        out.put(ch - shift); // Shift character backward
    }

    cout << "Decryption done! Check '" << outputFile << "'." << endl;

    in.close();
    out.close();
}

int main() {
    int shift = 3; // Shift value for encryption and decryption

    encryptFile("input.txt", "encrypted.txt", shift);
    decryptFile("encrypted.txt", "decrypted.txt", shift);

    return 0;
}
