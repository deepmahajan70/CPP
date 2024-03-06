#include<iostream>
#include<iomanip>
using namespace std;

class Date{
    private: //Instance Variables
        int day;
        int mon;
        int year;
        string month;
    public: 
        Date(){ //Default Constructor
            day = 01;
            mon = 01;
            year = 1985;
        }
        Date(int d,int m, int y){ //Parameterized Constructor
            day = d;
            mon = m;
            year = y;
            showDate1();
        }
        void showDate1(){
            cout<<day<<"-"<<mon<<"-"<<year<<endl;
            cout<<setw(2)<<setfill('0')<<day<<"-"<<getMonthAbbrivation(mon)<<"-"<<year<<endl;
        }
        Date(int d,string mon, int y){ //Parameterized Constructor
            day = d;
            month = mon;
            year = y;
            showDate2();
        }
        void showDate2(){
            cout<<day<<"-"<<month<<"-"<<year<<endl;
            cout<<setw(2)<<setfill('0')<<day<<"-"<<getMonthNumber(month)<<"-"<<year<<endl;
        }
        string getMonthAbbrivation(int m){
            string abbr[]={"","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};        
            return abbr[m];
        }
        int getMonthNumber(string sm){
            if(sm =="jan"|| sm =="JAN"){return 1;}
            if(sm =="feb"|| sm =="FEB"){return 2;}
            if(sm =="mar"|| sm =="MAR"){return 3;}
            if(sm =="apr"|| sm =="APR"){return 4;}
            if(sm =="may"|| sm =="MAY"){return 5;}
            if(sm =="jun"|| sm =="JUN"){return 6;}
            if(sm =="jul"|| sm =="JUL"){return 7;}
            if(sm =="aug"|| sm =="AUG"){return 8;}
            if(sm =="sep"|| sm =="SEP"){return 9;}
            if(sm =="oct"|| sm =="OCT"){return 10;}
            if(sm =="nov"|| sm =="NOV"){return 11;}
            if(sm =="dec"|| sm =="DEC"){return 12;}
        }
        
};
int d,m,y;
    void acceptDate(){
        cout<<"Enter Date d m y:"<<endl;
        cin>>d>>m>>y;
    }
int main(){
    acceptDate();
    Date d1(d,m,y);
    Date d2(7,"mar",2024);
    return 0;
}