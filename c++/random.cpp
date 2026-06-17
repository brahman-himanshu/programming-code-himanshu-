#include <iostream>
using namespace std;

class Son {
    string name;

public:
    Son(string n) {
        name = n;
    }

    void printName() {
        cout << "Mere bete ka naam hai: " << name << " lodu" << endl;
    }
};

int main() {
    Son son1("Kartik");
    Son son2("Shivam");

    son1.printName();
    son2.printName();

    return 0;
}