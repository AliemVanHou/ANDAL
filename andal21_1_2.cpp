#include <iostream>
using namespace std;

// Abstract class
class Hewan {
public:
    virtual void suara() = 0;
};

class Kucing : public Hewan {
public:
    void suara() override {
        cout << "Meong!" << endl;
    }
};

class Anjing : public Hewan {
public:
    void suara() override {
        cout << "Guk guk!" << endl;
    }
};

int main() {
    Kucing k;
    Anjing a;

    k.suara(); 
    a.suara();  

    return 0;
}

