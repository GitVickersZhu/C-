#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Goods {
private:
    double weight;
    static double totalWeight;

    string name;

    double GoodsType();

public:
    Goods(string naming);

    ~Goods();

    static double GetTotalWeight();

    double GetWeight();

    void Sell();
};


Goods::Goods(string naming) {
    name = naming ;
    weight = GoodsType();
    totalWeight += weight;
}

Goods::~Goods() {
    if (totalWeight - weight < 0);
    else totalWeight -= weight;
}

double Goods::GetWeight() {
    return weight;
}

double Goods::GetTotalWeight() {
    return totalWeight;
}

double Goods::GoodsType() {
    if (name == "sonyxz2")
        return 500.0;
    else if (name == "mimix2s")
        return 200.0;

}

void Goods::Sell() {
    if (totalWeight - weight < 0);
    else totalWeight -= weight;
}

double Goods::totalWeight = 0.0;


int main() {
    char *temp1;
    Goods *sony = new Goods("sonyxz2");
    cout << sony->GetTotalWeight() << "     " << sony->GetWeight() << endl;
    sony->Sell();
    cout << sony->GetTotalWeight() << "     " << sony->GetWeight() << endl;
    delete sony;
    return 0;
}