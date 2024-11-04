#include <iostream>
using namespace std;

class A
{
public:
    void sum(int a, int b, int c)
    {
        cout << "Class A: " << endl;
        cout << "SUM = " << a + b + c << endl;
    }
};

class B : public A
{
public:
    void sum(int a, int b, int c)
    {
        cout << "Class B: " << endl;
        cout << "SUM = " << a + b + c << endl;
    }
};

int main()
{

    A ob1;
    B ob2;
    ob1.sum(60, 2, 8);
    ob2.A::sum(94, 55, 49);
    return 0;
}