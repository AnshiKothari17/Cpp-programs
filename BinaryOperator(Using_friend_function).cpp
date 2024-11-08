
#include <iostream> 
using namespace std;

class A {
    private:
        int a;

    public:
        A(int a) {
            this->a = a;
        }

        friend void operator +(A& obj1, A& obj2) {
            int c;
            c = obj1.a + obj2.a;
            cout << c << endl;
        }

        friend void operator -(A& obj1, A& obj2) {
            int d;
            d = obj1.a - obj2.a;
            cout << d << endl;
        }
};

int main() {
    A ob1(20);
    A ob2(55);
    ob1 + ob2;
    ob1 - ob2;
    return 0;
}
