// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of operator <<,>> overloading using Friend Function
#include <iostream>
using namespace std;

class Complex{
    private:
        double real, imaginary;
    public:
        Complex(double r = 0,double i = 0):real(r), imaginary(i){}; //constructor

        friend ostream& operator <<(ostream& out, const Complex& c); //insertion

        friend istream& operator >>(istream& in, Complex& c); //extraction
};
// Overload << operator
ostream& operator << (ostream& out, const Complex& c) {
    out << c.real << " + " << c.imaginary << "i";
    return out;
}

// Overload >> operator
istream& operator >> (istream& in, Complex& c) {
    cout << "Enter real and imaginary parts: ";
    in >> c.real >> c.imaginary;
    return in;
}

int main() {
    Complex c1;
    cin >> c1; // Overloaded >> operator
    cout << "You entered: " << c1 << endl; // Overloaded << operator
    return 0;
}