#include<iostream>
using namespace std;

class Poly{
    public: int area(){
        return 0;
    }
    float area(float r){
        float const pi = 3.14;
        return pi*r*r;
    }
    float area(int b, int h){
        float const x = 0.5;
        return x*b*h;
    }
};

int main(){
    Poly p,c,t;
    int a1 = p.area();
    float a2 = c.area(2.2);
    float a3 = t.area(4,6);
    cout<<a1<<endl<<a2<<endl<<a3<<endl;
 return 0;
}