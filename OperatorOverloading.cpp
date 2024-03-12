#include<iostream>
#include<string>
using namespace std;

//structure attributes are public by default
//class attributes are private by default
struct Date{
    int day;
    string month;
    int year;
    //structure can also have constructor
    Date(int dd, string mon, int yyyy){
        day = dd;
        month = mon;
        year = yyyy;

    }
};
// Approach 1
// void operator <<(ostream& COUT, Date& DATE){
//  COUT << "Date is :" << DATE.day <<endl;
//  COUT << "Month is :" << DATE.month <<endl;
// }

// Approach 2
ostream& operator <<(ostream& COUT, Date& DATE){
 COUT << "Date is :" << DATE.day <<endl;
 COUT << "Month is :" << DATE.month <<endl;
 return COUT;
}


int main(){
    Date d1(7,"March",2024);
    Date d2(31, "Oct",1990);
    //cout<<d1; Error ? Sol --> Operator overloading
    //Just like function overloading, we need to define operator as a function
    cout << d1; // OK
    //but can we do this --> cout << d1 << d2; --> Error --> Sol -->
    //ostream operator& <<(ostream& COUT, Date& DATE){
    // COUT << "Date is :" << DATE.day <<endl;
    // COUT << "Month is :" << DATE.month <<endl;
    // return COUT;
    //}
    cout << d1 << d2;
    //we can also call these operator overloading function just like normal function e.g.
    operator<<(cout,d2); // but this is not preffered way of using operator overloading functions
    return 0;
}