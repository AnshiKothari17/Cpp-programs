//Swap two numbers using a parameterized constructor
#include<iostream>
using namespace std;

class SwapNumbers {
    int a, b;
public:
    SwapNumbers(int x, int y) {
        a = x;
        b = y;
    }
    void swapValues() {
        int temp = a;
        a = b;
        b = temp;
    }
    void display() {
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int x = 5, y = 10;
    SwapNumbers obj(x, y);
    obj.swapValues();
    obj.display();
    return 0;
}

