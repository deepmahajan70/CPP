#include <iostream>
using namespace std;

class User
{
    string username;
    string password;
    bool admin = false;
public:
    void signUp()
    {
        cout << "Set Username: " << endl;
        cin >> this->username;
        cout << "Set Password: " << endl;
        cin >> this->password;
    }
    bool login()
    {
        string u_name, passwd;
        cout<< "Enter Username: " << endl;
        cin >> u_name;
        cout << "Enter Password: " << endl;
        cin >> passwd;
        if (u_name == "abc" && passwd == "123")
        {
            admin = true;
            return true;
        }
        else
        {
            return false;
        }
    }

};

int main(){
    bool isAdmin;
    User u1;
    u1.signUp();
    isAdmin = u1.login();
    while(isAdmin){
        int choice;
        cout<<"Enter your Choice"<<endl;
        cout<<"1: Display Movie List"<<endl;
        cout<<"2: Add New Movie"<<endl;
        cout<<"3: Set Movie Ticket"<<endl;
        cout<<"4: Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Call Display";
            break;
        case 2:
            cout<<"Call AddMovie";
            break;
        case 3:
            cout<<"Call SetMovie";
            break;
        case 4:
            cout<<"Buy...Buy";
            return 0;
            break;
        default:
            break;
        }
    }
    out: return 0;
}