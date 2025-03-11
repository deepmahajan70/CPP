// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of - operator overloading
#include <iostream>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(int x1 = 0, int y1 = 0):x(x1),y(y1){};
        
        Point operator + (const Point& obj){
            return Point(x+obj.x,y+obj.y);
        }
        void display(){
            cout<<x<<'\t'<<y<<endl;
        }

};
int main() {

    Point p1(2,3),p2(4,5);
    Point p3 = p1+p2;
    p3.display();

    return 0;
}