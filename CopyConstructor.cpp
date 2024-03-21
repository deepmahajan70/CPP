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
        Car(Car& obj){
            reg_no = obj.reg_no;
        }
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