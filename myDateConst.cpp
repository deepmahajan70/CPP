#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(2000) {} // No argument constructor
    
    Date(int d, int m, int y) : day(d), month(m), year(y) {} // Parameterized constructor
    
    void acceptDate() {
        cout << "Enter date (dd mm yyyy): ";
        cin >> day >> month >> year;
    }
    
    void displayDate() {
        cout << "Date formats:\n";
        cout << "dd-mm-yyyy: " << setw(2) << setfill('0') << day << "-" << setw(2) << setfill('0') << month << "-" << year << endl;
        cout << "dd-MMM-yyyy: " << setw(2) << setfill('0') << day << "-" << getMonthAbbreviation(month) << "-" << year << endl;
        cout << "dd/mm/yy: " << setw(2) << setfill('0') << day << "/" << setw(2) << setfill('0') << month << "/" << setw(2) << setfill('0') << (year % 100) << endl;
    }
    
    int getDaysInMonth(int m) {
        int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return days[m];
    }
    
    string getMonthAbbreviation(int m) {
        string abbreviations[] = {"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
        return abbreviations[m];
    }
    
    int getDaysDifference(Date other) {
        int days1 = day + month * 30 + year * 365;
        int days2 = other.day + other.month * 30 + other.year * 365;
        return abs(days1 - days2);
    }
    
    void incrementDay() {
        day++;
        if (day > getDaysInMonth(month)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
    
    void incrementMonth() {
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
};

int main() {
    Date date1, date2;
    cout << "Enter details for date1:\n";
    date1.acceptDate();
    cout << "\nEnter details for date2:\n";
    date2.acceptDate();
    
    cout << "\nDate1 in different formats:\n";
    date1.displayDate();
    cout << "\nDate2 in different formats:\n";
    date2.displayDate();
    
    cout << "\nDifference between the dates: " << date1.getDaysDifference(date2) << " days.\n";
    
    cout << "\nIncrementing day for date1...\n";
    date1.incrementDay();
    cout << "Date1 after incrementing day:\n";
    date1.displayDate();
    
    cout << "\nIncrementing month for date2...\n";
    date2.incrementMonth();
    cout << "Date2 after incrementing month:\n";
    date2.displayDate();
    
    return 0;
}
