// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of - mutable variable
#include <iostream>
using namespace std;

class test_mutable{
    public: int a;
            mutable int b;
    
    test_mutable(){
        a = 3;
        b = 4;
    }

};
int main() {

    const test_mutable t1;
   // t1.a = 3;
    t1.b = 99;

    cout<<t1.a<<endl;
    cout<<t1.b<<endl;

    return 0;
}