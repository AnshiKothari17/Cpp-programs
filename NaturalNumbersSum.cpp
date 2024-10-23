//Display the sum of first n natural numbers using a default constructor
#include<iostream>
using namespace std;

class SumNatural {
    int n, sum;
public:
    SumNatural() {
        n = 10; 
        sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
    }
    void display() {
        cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    SumNatural obj;
    obj.display();
    return 0;
}
