#include<iostream>
using namespace std;

class Circle {
    private:
        double radius;

    public:
        void setRadius(double r) {
            radius = r;
        }

        double getArea() {
            return 3.14 * radius * radius;
        }
};

int main() {
    Circle c1;
    // c1.radius = 0.2;        //Cannot be accessed directly; as it is private variable 
    c1.setRadius(5.0);         // Accessing private data via public methods
    cout << "Area: " << c1.getArea() << endl;
    return 0;
}
