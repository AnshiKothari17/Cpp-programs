//Display the sum of two numbers using multiple inheritance.

#include<iostream>
using namespace std;

class Base1 {
protected:
    int num1;
public:
    Base1() {
        num1 = 15;
    }
};

class Base2 {
protected:
    int num2;
public:
    Base2() {
        num2 = 25;
    }
};

class Derived : public Base1, public Base2 {
public:
    void sum() {
        cout << "Sum of two numbers: " << num1 + num2 << endl;
    }
};

int main() {
    Derived obj;
    obj.sum();
    return 0;
}

