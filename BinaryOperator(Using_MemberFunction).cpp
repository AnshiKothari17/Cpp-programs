
#include <iostream>
using namespace std;

class A {
    public:
        int a;
        A(int a) {
            this->a = a;
        }

        void operator +(A obj1) {
            int c;
            c = a + obj1.a;
            cout << c << endl;
        }

        void operator -(A obj1) {
            int d;
            d = a - obj1.a;
            cout << d << endl;
        }
};

int main() {
    A ob1(10);
    A ob2(8);
    ob1 - ob2;
    ob1 + ob2;
    return 0;
}
