//
// Created by VickersZhu on 2018/5/16.
//

#ifndef LAB_3_TDATE_H
#define LAB_3_TDATE_H

#include <ctime>

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

#endif //LAB_3_TDATE_H
