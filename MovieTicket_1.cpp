#include<iostream>
using namespace std;

class movie{
    string movie_name;
    float adlt_ticket_price;
    float child_ticket_price;

    public: void SetTicket(){
        cout << "Enter Ticket Price(Adult) :";
        cin >> this->adlt_ticket_price;
        cout << "Enter Ticket Price(Child) :";
        cin >> this->child_ticket_price;
    }

    public: void Buy_Ticket(int no_of_adult,int no_of_child){
        cout << "Enter Movie Name : ";
        cin >> this->movie_name;
        //cout << "Name of Movie:"<<this->movie_name;
        float amount_to_be_paid = float((this->adlt_ticket_price*no_of_adult))+float((this->child_ticket_price*no_of_child));
        cout << "Please Pay Rs.: "<<amount_to_be_paid <<" for Movie "<<this->movie_name;
   }
};

int main(){
movie m1;
m1.SetTicket();
m1.Buy_Ticket(2,1);
return 0;
}