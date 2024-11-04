#include <iostream>
using namespace std;

class A
{
public:
    virtual void sum(int a, int b, int c)
    {
        cout << "Class A: " << endl;
        cout << "SUM = " << a + b + c << endl;
    }
};

class B : public A
{
public:
    void sum(int a, int b, int c) override
    {
        cout << "Class B: " << endl;
        cout << "SUM = " << a + b + c << endl;
    }
};

int main()
{

    A ob1, *ptr;
    B ob2;
    ptr = &ob2;
    ptr->sum(10, 20, 30);
    ob1.sum(40, 50, 60);
    return 0;
}