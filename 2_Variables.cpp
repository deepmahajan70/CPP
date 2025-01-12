// Author: Deepak Mahajan
// Objective: The code will demonstrate different variables
#include <iostream>
using namespace std;
int global_var = 999; //global variable, will get space in Heap Memory
const int const_var = 111; //global variable with constant value
void use_static_variable(){
    static int s = 0; // static variable, value will persist across function calls
    s++;
    global_var += 1;
   // const_var += 111; // Constant value can not be modified
    cout<<s<<endl;
    cout<<global_var<<endl;
    cout<<const_var<<endl;
}
void use_non_static_variable(){
    int s = 0;
    s++;
    global_var -= 1;
    cout<<s<<endl;
    cout<<global_var<<endl;
}
int main() {
    int a; //local variable,static memory allocates memory on stack
    long long f = 4294967296LL;
    a = 20;
    int p_or_n = -200;
    unsigned int p_only = -111; // can only store +ve number
    cout<<f-unsigned(p_or_n)<<endl;
    cout<<p_only<<endl;

    global_var = global_var + 1; //can be accessed in main, and modified
    cout<<global_var<<endl; 

    int *p = new int; //local variable,dynamic memory allocates memory on heap
    *p = 24;
    cout <<a<<endl;
    cout <<*p<<endl;

    delete p; //deallocate memory, to avoid dangling pointer problem

    //Demonstrate use of Non-Static variable
    use_non_static_variable();
    use_non_static_variable();
    use_non_static_variable();
    
    //Demonstrate use of Static variable
    use_static_variable();
    use_static_variable();
    use_static_variable();

    return 0;
}

