#include <iostream>
#include <string>

using namespace std;

class Point {
protected:
    double x;
    double y;
public:
    void print();

    void SetValue(double, double);
};

void Point::SetValue(double temp1, double temp2) {
    x = temp1;
    y = temp2;
}

void Point::print() {
    cout << "(" << x << "," << y << ")" << endl;
}

class Shape {
protected:
    string name;
};


class Line : public Shape {
private:
    Point bgn;
    Point end;
public:
    void SetValue(double, double, double, double);

    void Print();

    Line();

};

Line::Line() {
    name = "line";
    cout<<"Input 4 values"<<endl;
    double temp1,temp2,temp3,temp4;
    cin>>temp1>>temp2>>temp3>>temp4;
    SetValue(temp1,temp2,temp3,temp4);
}

void Line::SetValue(double temp1, double temp2, double temp3, double temp4) {
    bgn.SetValue(temp1,temp2);
    end.SetValue(temp3,temp4);
}

void Line::Print() {
    cout<<"This is "<<name<<endl;
    bgn.print();
    end.print();
}
int main() {
    Line *line1 = new Line();
    line1->Print();

    delete line1;
    return 0;
}