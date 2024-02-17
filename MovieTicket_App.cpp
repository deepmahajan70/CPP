#include<iostream>
using namespace std;

class movie{
    string movie_name;
    float adlt_ticket_price;
    float child_ticket_price;
    int max_seats = 0;
    int booked_seats = 0;
    int available_seats = 0;
    int no_of_adult = 0;
    int no_of_child = 0;

    public: void SetTicket(){
        cout << "Enter Ticket Price(Adult) :";
        cin >> this->adlt_ticket_price;
        cout << "Enter Ticket Price(Child) :";
        cin >> this->child_ticket_price;
    }

    public: void SetMovie(){
        cout << "Enter Movie Name : ";
        cin >> this->movie_name; 
        cout << "Enter Max. Seats Available : ";
        cin >> this->max_seats;
        this->available_seats = this->max_seats - this->booked_seats; 
        this->SetTicket();
    }

    public: int getStatus(){
        if(this->available_seats == 0){
            cout <<"Sorry...Tickets are not available !";
            return 0;
        }
        else{
            cout <<this->available_seats <<" Tickets are available !"<<endl;
            return 1;
        }    
    }
    public: void Buy_Ticket(){
        cout << "Enter Movie Name : ";
        cin >> this->movie_name;
        int status = this->getStatus();
        int payment_received = 1;
        back:if (status ==1){
            cout << "Adult Ticket Price is : Rs."<< this->adlt_ticket_price <<endl;
            cout << "Child(age < 12) Ticket Price is : Rs."<< this->child_ticket_price <<endl;
            cout << "How many Adult Tickets You Want? :";
            cin >> this->no_of_adult;
            cout << "How many Child Tickets You Want?";
            cin >> this->no_of_child;
            int total_tickets = this->no_of_adult + this->no_of_child;
            if(total_tickets > this->available_seats){
                cout <<"Sorry...only "<< this->available_seats <<"are available,try less tickets" <<endl;
                goto back;
            }
            else{
                float amount_to_be_paid = float((this->adlt_ticket_price*no_of_adult)+(this->child_ticket_price*no_of_child));
                cout << "Please Pay Rs.: "<<amount_to_be_paid <<" for Movie "<<this->movie_name;
                if(payment_received == 1){
                this->booked_seats = this->no_of_adult + this->no_of_child;
                this->available_seats = this->available_seats - this->booked_seats;
                cout << "Thank you...Enjoy Movie...!"<<endl;
                }
            }
            this->getStatus();
        }
   }
};

int main(){
movie m1;
m1.SetMovie();
m1.Buy_Ticket();
return 0;
}