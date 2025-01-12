// Author: Deepak Mahajan
// Objective: The code will demonstrate the circular dependency 
//            and solving it by forward Declaration
#include <iostream>
using namespace std; // optional

class A; // Frward Declaration to solve circular dependancy

class B{
    public: A* aptr;
};
class A{
    public:  B* bptr;
};


int main() {
 cout<<"Demonstrating Circular Dependency";
 return 0;
}