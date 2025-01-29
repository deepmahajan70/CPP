// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of - ...
#include <iostream>
using namespace std;

class Scopy{
    private:
        int* p;
        
    public:
        void getInfo(){ //accessor 
            cout<<*p<<endl;
        }
        void setInfo(int v){ //mutator
            *this->p = v;
        }
        Scopy(){ // Default Constructor
            p = new int(0);
            cout<<"Default Constructor is Called"<<endl;
        }
        Scopy(const Scopy& obj){// Copy Constructor
            cout<<"Default Copy Constructor is Called"<<endl;
            p = obj.p; //shallow copy
            //p = new int(*(obj.p)); //deep copy
        }
        ~Scopy(){
            delete p;
        }
};

int main(){
    Scopy s1;
    s1.setInfo(5);
    s1.getInfo();
    Scopy s2 = s1;
    s2.getInfo();
   // s2.setInfo(10);// will change the shared data --> data corruption
    //s2.~Scopy();  // will delete the shared data --> multiple deletion
   // s2.getInfo();
    s1.getInfo();
    return 0;
}