#include <iostream>
using namespace std;


template <typename T> // T is placeholder for datatype
T add(T a, T b) { return a + b; }

int main() {
    cout << add(5, 10) << endl;      // Integer addition
    cout << add(5.5, 2.3) << endl;   // Double addition
    return 0;
}
