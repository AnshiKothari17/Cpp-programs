#include <iostream>
using namespace std;

class A {
public:
    int number;

   A(int num) {
       
    number = num;
    
   }


    friend class B;
};

class B {
public:
    void check(A &t) {
        int factorCount = 0;

        for (int i = 1; i <= t.number; i++) {
            if (t.number % i == 0) {
                factorCount++;
            }
        }

        if (factorCount == 2) {
            cout << t.number << " is a Prime Number." << endl;
        } else {
            cout << t.number << " is Not a Prime Number." << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter a number to check if it is prime: ";
    cin >> num;

    A ob1(num);
    B ob2;
    ob2.check(ob1);

    return 0;
}
