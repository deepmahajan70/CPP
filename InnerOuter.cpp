// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of - ...
#include <iostream>
using namespace std;

class Outer{
    private:
        int o =1;
    public:
        class Inner{
            private:
                int i = 7;
            public:
                Inner(){
                cout<<"Inner Constructor";
                }
                int ip = 77;
                void getOuter(Outer& obj){
                    cout<<obj.o;
                    cout<<obj.op;
                }

        };
        Outer(){
            cout<<"Outer Constructor";
        }
        int op = 11;
};
int main() {
    Outer o1;
    Outer::Inner i1;
    cout<<i1.ip;
    i1.getOuter(o1);
    return 0;
}