#include <iostream>
#include <string>
#include <cstring>
#include "..\Lab_3\TDate.h"

using namespace std;
//bool Run(int y);
//
//class TDate {
//public:
//    friend bool Run(int y);
//
//private:
//    int year;
//    int month;
//    int day;
//
//    bool Judge();
//
//
//public:
//
//    TDate();
//
//    void SetDate(int y, int m, int d);
//
//    void AddOneDay();
//
//    void print();
//};
//
//bool TDate::Judge() {
//    switch (month) {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            if (day > 0 && day < 32) return true;
//            else return false;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            if (day > 0 && day < 31) return true;
//            else return false;
//        case 2:
//            if (Run(year)) {
//                if (day > 0 && day < 30) return true;
//                else return false;
//            } else {
//                if (day > 0 && day < 29) return true;
//                else return false;
//            }
//        default:
//            return false;
//    }
//}
//
//bool Run(int y) {
//    if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0))
//        return true;
//    else return false;
//}
//
//void TDate::AddOneDay() {
//    if (Judge()) {
//        day++;
//        if (Judge()) return;
//        else {
//            day--;
//            month++;
//            if (Judge()) {
//                day = 1;
//                return;
//            } else month--;
//        }
//    }
//}
//
//void TDate::print() {
//    cout << year << "/" << month << "/" << day << endl;
//}
//
//void TDate::SetDate(int y, int m, int d) {
//    year = y;
//    month = m;
//    day = d;
//    if(Judge()) cout<<"Fail"<<endl;
//}
//
//
//TDate::TDate() {
//    tm *t = new tm;
//    year = t->tm_year;
//    month = t->tm_mon;
//    day = t->tm_mday;
//}


class people {
private:
    char *name;
    TDate birthday;
    int height;
    char *address;
public:
    people(char *tname, int y, int m, int d, int theight, char *taddress);

    ~people();

    void updateAddress(char *taddress);


};

people::people(char *tname, int y, int m, int d, int theight, char *taddress) {

    name = tname;
    birthday.SetDate(y, m, d);
    height = theight;
    address = taddress;
}

people::~people() {
    delete name;
    delete address;
}

void people::updateAddress(char *taddress) {
    address = taddress;
}

int main() {

    char *temp1;
    char *temp2;
    int y, m, d, h;
    cin >> temp1 >> temp2;
    cin >> y >> m >> d >> h;
    people *Vickers = new people(temp1, y, m, d, h, temp2);

    return 0;
}
