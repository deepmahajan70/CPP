// Author: Deepak Mahajan
// Objective: The code will demonstrate the Object Slicing
#include <iostream>
using namespace std;

class Base {
    public:
        int x;
        virtual void show() = 0;//{
        //     cout<<"X: "<<x<<endl;
        //     cout<<"THIS IS BASE"<<endl;
        // }
};

class Derived : public Base {
    public:
        int y;
        void show(){
            cout<<"X: "<<x<<endl;
            cout<<"Y: "<<y<<endl;
        }
};
    
int main() {
    Derived d;
    d.x = 10;
    d.y = 20;
    
    Base* b = &d; // Object slicing (y is lost)
    // cout << b.x; // ✅ Works
    // cout << b.y; //❌ Error (Base has no y)
    b->show();
return 0;
}