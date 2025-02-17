// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of - Function Overriding
#include <iostream>
using namespace std;

class Base{
    public: 
        virtual void show(){
            cout<<"I am Base Class Function";
        }
        Base(){
            cout<<"Base Constructor";
        }

};
class Derived: public Base{
    public: 
        void show(){
            cout<<"I am Derived Class Function";
        }
        Derived(){
            cout<<"Derived Constructor";
        }

};
int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();
    //d.show();
    return 0;
}