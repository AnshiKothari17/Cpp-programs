#include <iostream>
using namespace std;
class A
{
public:
    int a;
    A(int a)
    {
        this->a = a;
    };
    friend void operator++(A &t);
    friend void operator--(A &t);
    friend void operator-(A &t);
    int display()
    {
        return a;
    }
};
void operator++(A &t)
{
    t.a = t.a + 5;
}
void operator--(A &t)
{
    t.a = t.a - 1;
}
void operator-(A &t)
{
    t.a = -(t.a);
}
int main()
{
    A obj(12);
    ++obj;
    cout << obj.display() << endl;
    --obj;
    cout << obj.display() << endl;
    -obj;
    cout << obj.display() << endl;
    return 0;
}