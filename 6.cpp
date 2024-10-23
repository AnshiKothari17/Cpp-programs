//Display the sum of two numbers using multilevel inheritance where one number is declared in the base class, and one in the derived class.

#include<iostream>
using namespace std;

class Base {
protected:
    int num1;
public:
    Base() {
        num1 = 10;
    }
};

class Derived1 : public Base {
protected:
    int num2;
public:
    Derived1() {
        num2 = 20;
    }
};

class Derived2 : public Derived1 {
public:
    void sum() {
        cout << "Sum of two numbers: " << num1 + num2 << endl;
    }
};

int main() {
    Derived2 obj;
    obj.sum();
    return 0;
}

