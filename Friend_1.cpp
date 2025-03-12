// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of - Friend Function
#include <iostream>
using namespace std;

class House{
    private:
        int key;
    public:
        House(int k = 1234):key(k){};
        void setKey(int sk){
            key = sk;
        }
        void showKey(){
            cout<<"Key is : "<<key<<endl;
        }
        friend void relative(House& obj);
};

void relative(House& obj){
    obj.key = 5432;
}
int main() {
    House h1;
    h1.showKey();
    relative(h1);
    h1.showKey();
    return 0;
}