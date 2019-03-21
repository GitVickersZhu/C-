#include <iostream>
#include <ctime>

using namespace std;

bool Run(int y);

class TDate {
public:
    friend bool Run(int y);

private:
    int year;
    int month;
    int day;

    bool Judge();


public:

    TDate();

    void SetDate(int y, int m, int d);

    void AddOneDay();

    void print();
};

bool TDate::Judge() {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 0 && day < 32) return true;
            else return false;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 0 && day < 31) return true;
            else return false;
        case 2:
            if (Run(year)) {
                if (day > 0 && day < 30) return true;
                else return false;
            } else {
                if (day > 0 && day < 29) return true;
                else return false;
            }
        default:
            return false;
    }
}

bool Run(int y) {
    if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0))
        return true;
    else return false;
}

void TDate::AddOneDay() {
    if (Judge()) {
        day++;
        if (Judge()) return;
        else {
            day--;
            month++;
            if (Judge()) {
                day = 1;
                return;
            } else month--;
        }
    }
}

void TDate::print() {
    cout << year << "/" << month << "/" << day << endl;
}

void TDate::SetDate(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
        if(Judge()) cout<<"Fail"<<endl;
}


TDate::TDate() {
    tm *t = new tm;
    year = t->tm_year;
    month = t->tm_mon;
    day = t->tm_mday;
}

int main() {
    TDate *date = new TDate;

    date->print();


    return 0;
}