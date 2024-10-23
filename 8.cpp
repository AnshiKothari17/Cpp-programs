//Using hierarchical inheritance where two numbers are declared in the base class. Display one number in the first derived class and another in the second derived class.

#include<iostream>
using namespace std;

class Base {
protected:
    int num1, num2;
public:
    Base() {
        num1 = 5;
        num2 = 10;
    }
};

class Derived1 : public Base {
public:
    void displayFirst() {
        cout << "First number: " << num1 << endl;
    }
};

class Derived2 : public Base {
public:
    void displaySecond() {
        cout << "Second number: " << num2 << endl;
    }
};

int main() {
    Derived1 obj1;
    obj1.displayFirst();
    
    Derived2 obj2;
    obj2.displaySecond();
    return 0;
}

