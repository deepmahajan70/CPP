#include <iostream>
using namespace std;

// Function for integers
int add(int a, int b) { return a + b; }

// Function for doubles
double add(double a, double b) { return a + b; }

int main() {
    cout << add(5, 10) << endl;      // Integer addition
    cout << add(5.5, 2.3) << endl;   // Double addition
    return 0;
}
