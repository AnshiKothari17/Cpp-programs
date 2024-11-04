
// SumOverloading.cpp
#include <iostream>
using namespace std;

class Sum {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    int add(int a, int b, int c, int d) {
        return a + b + c + d;
    }
};

int main() {
    Sum sum;
    cout << "Sum of 2 numbers (3, 4): " << sum.add(3, 4) << endl;
    cout << "Sum of 3 numbers (3, 4, 5): " << sum.add(3, 4, 5) << endl;
    cout << "Sum of 4 numbers (3, 4, 5, 6): " << sum.add(3, 4, 5, 6) << endl;
    return 0;
}
