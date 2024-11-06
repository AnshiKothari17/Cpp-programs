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
    void operator+();
    void operator-();
    void operator~();
    int display()
    {
        return a;
    }
};
void A::operator+()
{
    a = a + 5;
}
void A::operator-()
{
    a = a - 1;
}
void A::operator~()
{
    a = ~a;
}
int main()
{
    A obj(5);
    +obj;
    cout << obj.display() << endl;
    -obj;
    cout << obj.display() << endl;
    ~obj;
    cout << obj.display() << endl;
    return 0;
}