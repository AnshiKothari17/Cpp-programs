#include <iostream>
#include <string>
using namespace std;

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
    
    friend class FriendClass;
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
    
    friend class FriendClass;
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
    
    friend class FriendClass;
};

class FriendClass {
public:
    void displayDetails(A &a, B &b, C &c) {
        cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
        cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
        cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
    }
};

int main() {
    A objA(10, "Hello A");
    B objB(20.5, "Hello B");
    C objC('Z', "Hello C");

    FriendClass friendObj;
    friendObj.displayDetails(objA, objB, objC);

    return 0;
}
