// Author: Deepak Mahajan
// Objective: The code will demonstrate the use of namespace
#include <iostream>
using namespace std;
namespace diploma{
    int salary = 25000; 
    void bonus(int s){
        float b = (s*(0.1));
        cout<<b<<endl;
    }
}
namespace degree{
    int salary = 32000;
    void bonus(int s){
    float b = (s*(0.2));
    cout<<b<<endl;
    }
}

int main() {
    int salary = 0;
    cout<<salary<<endl;
    cout<<diploma::salary<<endl;
    cout<<degree::salary<<endl;
    diploma::bonus(diploma::salary);
    degree::bonus(degree::salary);
    return 0;
}