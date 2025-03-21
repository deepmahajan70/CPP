#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // 1. Open a file in write mode (ios::out) and write to it
    ofstream outFile("example.txt", ios::out);
    if (outFile) {
        outFile << "Hello, this is a test file.\n";
        outFile.close();
        cout << "File written successfully.\n";
    }

    // 2. Open the file in append mode (ios::app)
    ofstream appendFile("example.txt", ios::app);
    if (appendFile) {
        appendFile << "This is appended text.\n";
        appendFile.close();
        cout << "Data appended successfully.\n";
    }

    // 3. Open the file in read mode (ios::in) and read content
    ifstream inFile("example.txt", ios::in);
    if (inFile) {
        string line;
        cout << "Reading file contents:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }

    // 4. Open the file in truncate mode (ios::trunc) to clear its content
    ofstream truncFile("example.txt", ios::trunc);
    if (truncFile) {
        cout << "File truncated (all contents deleted).\n";
        truncFile.close();
    }

    // 5. Open the file in binary mode (ios::binary) for writing
    ofstream binaryFile("binary.dat", ios::binary);
    if (binaryFile) {
        int num = 12345;
        binaryFile.write(reinterpret_cast<char*>(&num), sizeof(num));
        binaryFile.close();
        cout << "Binary file written successfully.\n";
    }

    return 0;
}
