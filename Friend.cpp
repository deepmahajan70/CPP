// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of - Friend Function
#include <iostream>
using namespace std;

class ABC{
    private: int p;
    friend void show(ABC obj){
        cout<<obj.p<<endl;
    }
    public: ABC(int v){
        p = v;
    }
};
int main() {
    ABC o(10);
    show(o);

    return 0;
}
