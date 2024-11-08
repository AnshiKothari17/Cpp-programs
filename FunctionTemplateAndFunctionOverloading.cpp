
#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Overloaded function for integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 3.5 and 2.5: " << add(3.5, 2.5) << endl; // Uses template function
    cout << "Sum of 10, 20, and 30: " << add(10, 20, 30) << endl; // Uses overloaded function

    return 0;
}
