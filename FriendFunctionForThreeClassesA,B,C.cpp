#include <iostream>
#include <string>
using namespace std;

class B; // Forward declaration of class B
class C; // Forward declaration of class C

class A {
private:
    int privateA;
protected:
    string protectedA;

public:
    A(int a, string str) {
        privateA = a;
        protectedA = str;
    }

    friend void displayDetails(A &a, B &b, C &c);
};

class B {
private:
    double privateB;
protected:
    string protectedB;

public:
    B(double b, string str) {
        privateB = b;
        protectedB = str;
    }

    friend void displayDetails(A &a, B &b, C &c);
};

class C {
private:
    char privateC;
protected:
    string protectedC;

public:
    C(char c, string str) {
        privateC = c;
        protectedC = str;
    }

    friend void displayDetails(A &a, B &b, C &c);
};

void displayDetails(A &a, B &b, C &c) {
    cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
    cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
    cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
}

int main() {
    A objA(10, "Hello A");
    B objB(20.5, "Hello B");
    C objC('Z', "Hello C");

    displayDetails(objA, objB, objC);

    return 0;
}
