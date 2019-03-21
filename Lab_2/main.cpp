#include <iostream>
#include <cmath>

using namespace std;

float Converts(float tempreture) {
    return (tempreture - 32) * 5 / 9;
}

int Test(int a, int b) {
    return a > b ? a : b;
}

int Test(int a, int b, int c) {
    return a > (b > c ? b : c) ? a : (b > c ? b : c);
}

float Test(float a, float b) {
    return a > b ? a : b;
}

float Test(float a, float b, float c) {
    return a > (b > c ? b : c) ? a : (b > c ? b : c);
}

bool Max(int a, int b = 0) {
    if (a > b ? a : b)
        return true;
    else false;
}


int main() {

    int tempreture;
    cout << "??????????????" << endl;
    cin >> tempreture;
    cout << "??????" << Converts(tempreture) << endl;
    int n1, n2, n3;
    float m1, m2, m3;
    cout << "??????????????" << endl;
    cin >> n1 >> n2;
    cout << "?????" << Test(n1, n2) << endl;
    cout << "??????????????" << endl;
    cin >> n1 >> n2 >> n3;
    cout << "?????" << Test(n1, n2, n3) << endl;
    cout << "??????????§³??" << endl;
    cin >> m1 >> m2;
    cout << "?????" << Test(m1, m2) << endl;
    cout << "??????????§³??" << endl;
    cin >> m1 >> m2 >> m3;
    cout << "?????" << Test(m1, m2, m3) << endl;
    int a, b;
    cout << "a??b?¦Ç?" << endl;
    cin >> a >> b;
    cout << a << "??" << b << "?¦Ç???" << pow(a, b) << endl;
    return 0;
}
