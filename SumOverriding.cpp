
// SumOverriding.cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual int add(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int add(int a, int b, int c) override {
        return a + b + c + 1;  // Overridden method, adding 1 for differentiation
    }
};

int main() {
    Base base;
    Derived derived;

    // Using base class object
    cout << "Sum using base class (3, 4, 5): " << base.add(3, 4, 5) << endl;

    // Using derived class object
    cout << "Sum using derived class (3, 4, 5): " << derived.add(3, 4, 5) << endl;

    return 0;
}
