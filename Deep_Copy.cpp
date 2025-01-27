// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of - Deep Copy Constructor
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Deep {
private:
    int* data;

public:
    // Constructor
    Deep(int value) {
        data = new int(value);
    }

    // Deep Copy Constructor
    Deep(const Deep& obj) {
        data = new int(*(obj.data)); // Allocate new memory and copy value
    }

    // Destructor
    ~Deep() {
        delete data;
        cout << "Destructor called" << endl;
    }

    // Display data
    void display() const {
        cout << "Value: " << *data << endl;
    }
    void setData(int n){
        *this->data = n;
    }
};

int main() {
    Deep obj1(42);
    Deep obj2 = obj1; // Deep copy

    //*obj2.data = 50; // This won't affect obj1
    obj2.setData(50);
    obj1.display();  // Displays 42
    obj2.display();  // Displays 50

    return 0;
}
