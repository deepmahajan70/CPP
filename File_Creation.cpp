#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt"); // Creating a file
    if (file.is_open()) {
        file << "Hello, this is a file handling example.\n";
        file.close(); // Closing the file
        cout << "File written successfully." << endl;
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}
