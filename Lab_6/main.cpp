#include <iostream>

using namespace std;

class Animal {
public:
    int age;
};

class dog : public Animal {
public:
    void SetAge(int);


};

void dog::SetAge(int age_temp) {
    Animal::age = age_temp;
}

class vehicle {
protected:
    int v;
public:
    void SetV(int);

    vehicle(int);
};

void vehicle::SetV(int temp) {
    v = temp;
}

vehicle::vehicle(int temp) : v(temp) {}

class bicycle : virtual public vehicle {
protected:
    int b;
public:
    void SetB(int,int);

    bicycle(int, int);

};

void bicycle::SetB(int temp,int temp1) {
    b = temp;
    v = temp1;
}


bicycle::bicycle(int temp, int temp1) : vehicle(temp), b(temp1) {}

class motocar : virtual public vehicle {
protected:
    int m;
public:
    void SetM(int,int);

    motocar(int, int);
};

void motocar::SetM(int temp,int temp1) {
    m = temp;
    v = temp1;
}

motocar::motocar(int temp, int temp1) : vehicle(temp), m(temp1) {}


class motocycle : public bicycle, public motocar {
protected:
    int mb;
public:
    void SetMB(int);

    motocycle(int, int, int, int);

    void print();
};

void motocycle::SetMB(int temp) {
    mb = temp;
}

motocycle::motocycle(int temp, int temp1, int temp2, int temp3) : vehicle(temp), bicycle(temp, temp1),
                                                                  motocar(temp, temp2),
                                                                  mb(temp3) {}
void motocycle::print() {
    cout<<v<<b<<m<<mb<<endl;
}

int main() {
    motocycle *yamaha = new motocycle(1,2,3,4);
    yamaha->print();
    yamaha->SetB(2,10);
    yamaha->print();
    yamaha->SetM(3,99);
    yamaha->print();
    return 0;
}