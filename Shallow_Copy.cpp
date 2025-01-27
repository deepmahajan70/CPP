// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of - Shallow Copy Constructor
#include <iostream>
using namespace std;

class ShallowCopy{
    private:
        int* sc;
    public:
        ShallowCopy(int i){ //Default constructor
            sc = new int(i); 
        }
        ShallowCopy(const ShallowCopy& obj){ //Default copy constructor(shallow)
            sc = obj.sc; //both will share the same memory
        }
        ~ShallowCopy(){ // destructor
            delete sc;
            cout<<"Destructor is called"<<endl;
        }
        void display(){
            cout<<*sc<<endl;
        }
        void setSC(int n){
            *this->sc = n; 
        }
};
int main() {
    ShallowCopy s1(111);
    s1.display();
    ShallowCopy s2 = s1; 
    //s1.~ShallowCopy(); //will delete the shared memory contents //Double Deletion Problem
    //s2.setSC(333);     //will modify the shared memory contents //Memory Corruption Problem
    s2.display();
    s1.display();
    return 0;
}

// Loss of Independence:
// In a shallow copy, objects are not independent. 
// Changes to the shared resource in one object automatically affect all objects sharing that resource.
// Undefined Behavior:
// If one object frees the shared resource (e.g., deletes a pointer), 
// the other objects trying to access it result in undefined behavior, such as segmentation faults.