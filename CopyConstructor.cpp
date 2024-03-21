// Author: Deepak Mahajan
// Objective: The code will demonstrate the copy constructor
#include <iostream>
using namespace std;

class Car{
    int reg_no;
    public:
        Car(){
            reg_no = 1234;
        }
        Car(int rnum){
            reg_no = rnum;
        }
        //Copy Constructor, if not found, compiler will provide its own copy constructor
        Car(Car& obj){
            cout<<"User's Copy Constructor is called";
            reg_no = obj.reg_no;
        }
        // even if we comment out our copy constructor, compiler will not throw any error 
    void display(){
        cout<<reg_no<<endl;
    }

};
int main() {
    Car c1;
    Car c2(3047);
    Car c3(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}