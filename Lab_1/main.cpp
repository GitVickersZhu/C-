#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

const double pi = 3.141592653;

double Square(double radius,char a);

double Square(double length, double width);

double Square(double edge, int Def = 0);

int main() {

    int i = 0, sum = 0;
    do {
        sum += ++i;
    } while (i <= 9);
    cout << sum << endl;

    for (i = 0, sum = 0; i < 11; ++i)
        sum += i;
    cout << sum << endl;

    char type;
    double temp1, temp2;
    while (1) {
        cout << "input your type" << endl;
        cin >> type;
        switch (type) {
            case 'c':
                cout << "Input radius " << endl;
                cin >> temp2;
                cout << "The circle's square is " << Square(temp2,'a') << endl;
                break;
            case 'r':
                cout << "Input length width" << endl;
                cin >> temp1 >> temp2;
                cout << "The square of rectangle is " << Square(temp1, temp2) << endl;
                break;
            case 's':
                cout << "Input edge" << endl;
                cin >> temp1;
                cout << "The square of square is " << Square(temp1, 0) << endl;
                break;
            default:exit(1);

        }


    }
    return 0;
}

double Square(double radius,char a) {
    return pi * radius * radius;
}

double Square(double length, double width) {
    return length * width;
}

double Square(double edge, int Def) {
    return edge * edge;
}