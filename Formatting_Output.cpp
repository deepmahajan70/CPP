#include <iostream>
#include <iomanip> // Required for manipulators
using namespace std;

int main() {
    string item_names[3] = {"Oil","Soap", "Deo"};
    int item_price[3] = {1113,35,256};
    cout<<"Item"<<'\t'<<"Price"<<endl;
    int total = 0;
    for(int i =0;i<3;i++){
        cout<<item_names[i]<<'\t'<<item_price[i]<<endl;
        total = total + item_price[i];
        cout<<"-----------------------"<<endl;
    }
    cout<<"Total:"<<'\t'<<total<<endl;
    for(int i =0;i<3;i++){
        cout<<item_names[i]<<'\t'<<setw(5)<<setfill(' ')<<item_price[i]<<endl;
        total = total + item_price[i];
        cout<<"-----------------------"<<endl;    
    }
    cout<<"Total:"<<'\t'<<setw(5)<<setfill(' ')<<total<<endl;
    // double pi = 3.14159265358979;
    // cout << "Default: " << pi << endl;
    // cout << fixed << setprecision(2) << "Fixed with 2 decimals: " << pi << endl;
    // cout << setw(10) << "Right Aligned" << endl;
    // cout << setw(10) << setfill('_')<<pi<< endl;
    return 0;
}
