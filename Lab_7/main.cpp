#include <iostream>

using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point(int, int);

    Point &operator++(int);

    Point &operator--(int);

    void print();
};

Point::Point(int temp1, int temp2) {
    x = temp1;
    y = temp2;

}

Point &Point::operator++(int) {
    x++;
    y++;
    return *this;
}

Point &Point::operator--(int) {
    x--;
    y--;
    return *this;
}

void Point::print() {
    cout << x << endl;
    cout << y << endl;
}

class vehicle{
public:
    virtual void Run();
};

void vehicle::Run(){
    cout<<"vehicle run!!"<<endl;
}

class bicycle:public vehicle{
public:
    void Run();
};

void bicycle::Run() {
    cout<<"bicycle run!!"<<endl;
}

class motocar:public vehicle{
public:
    void Run();
};

void motocar::Run() {
    cout<<"motocar run!!"<<endl;
}


class motocycle:public bicycle,public motocar{
public:
    void Run();
};

void motocycle::Run() {
    cout<<"motocycle run!!"<<endl;
}

int main() {
    int temp1, temp2;
    cin >> temp1 >> temp2;
    Point lct1(temp1,temp2);
    lct1.print();
    lct1++;
    cout<<"****"<<endl;
    lct1.print();

    vehicle *Temp;
    vehicle Temp1;
    bicycle Temp2;
    motocar Temp3;
    motocycle Temp4;
    Temp = &Temp1;
    Temp->Run();
    Temp = &Temp2;
    Temp->Run();
    return 0;
}