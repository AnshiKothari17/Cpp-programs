//Create a program on hybrid inheritance with five classes (A, B, C, D, and E).

#include<iostream>
using namespace std;

class A {
protected:
    int num1;
public:
    A() {
        num1 = 100;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "From class B, num1: " << num1 << endl;
    }
};

class C : public A {
public:
    void displayC() {
        cout << "From class C, num1: " << num1 << endl;
    }
};

class D : public B {
public:
    void displayD() {
        cout << "From class D, num1: " << num1 << endl;
    }
};

class E : public C {
public:
    void displayE() {
        cout << "From class E, num1: " << num1 << endl;
    }
};

int main() {
    D objD;
    objD.displayD();
    
    E objE;
    objE.displayE();
    return 0;
}
