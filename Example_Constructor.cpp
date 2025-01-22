// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of - Constructors
#include <iostream>
using namespace std;

class CircleCon{
    // private: 
    //     int radius;
    
    public:
        int radius;
        CircleCon(){ //Default Constructor
            radius = 10;
        }
         CircleCon(int r){ //Parameterized Constructor
            radius = r;
        }
        CircleCon(CircleCon& obj){ //Copy Constructor without const
            cout<<"Copy constructor is called"<<endl;
            radius = obj.radius;
            radius = 65;
           // obj.radius = 65; //Such accidental changes, should be prevented, so use const before CircleCon& obj
        }
        CircleCon(const CircleCon& obj){ //Copy Constructor
            cout<<"Copy constructor is called"<<endl;
            radius = obj.radius;
            radius = 55;
            //obj.radius = 65; //Such accidental changes, should be prevented, so use const before CircleCon& obj
        }


};
int main() {
    CircleCon c1;
    cout<<c1.radius<<endl;
    CircleCon c2(5);
    cout<<c2.radius<<endl;
    CircleCon c3 = c2;
    cout<<c3.radius<<endl;
    cout<<c2.radius<<endl;
    CircleCon c4 = c1;
    cout<<c4.radius<<endl;
    cout<<c1.radius<<endl;
    return 0;
}